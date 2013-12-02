#include <stdio.h>
#include "libtcap.h"
#include "ComponentPortion.h"
#include "Component.h"



const char tcap[] = "\x64\x81\x86\x49\x03\x0a\x7e\x71\x6b\x2a\x28\x28\x06\x07\x00\x11\x86\x05\x01\x01\x01\xa0\x1d\x61\x1b\xa1\x0d\x06\x0b\x2a\x81\x76\x82\x15\x01\x01\x01\x01\x00\x01\xa2\x03\x02\x01\x00\xa3\x05\xa1\x03\x02\x01\x00\x6c\x53\xa1\x10\x02\x01\x58\x02\x01\x22\xbf\x33\x07\x83\x05\x31\x30\x30\x32\x34\xa1\x3f\x02\x01\x59\x02\x01\x14\x30\x37\xa0\x0e\x04\x0c\x83\x90\x89\x10\x10\x80\x22\x08\x00\x55\x50\x05\x83\x01\x09\x9a\x22\x30\x20\xa0\x1e\x80\x01\x00\x81\x01\x00\x82\x01\x01\x83\x01\x01\x84\x01\x00\x85\x01\x00\x86\x01\x01\x87\x01\x01\x88\x01\x00\x89\x01\x00";
const int tcap_len = sizeof(tcap) - 1;


int main() {
	TCMessage_t *tcm;
	ComponentPortion_t *components = 0;
	Component_t *component;
	int i;
	void *arg;
	asn_TYPE_descriptor_t *type;

	tcm = tcap_decode(tcap, tcap_len);

	printf("TCMessage: %p\n", tcm);

	switch (tcm->present) {
		case TCMessage_PR_NOTHING:
			printf("nothing\n");
			break;

		case TCMessage_PR_unidirectional:
			printf("unidirectional\n");
			components = &tcm->choice.unidirectional.components;
			break;

		case TCMessage_PR_begin:
			printf("begin\n");
			components = tcm->choice.begin.components;
			break;

		case TCMessage_PR_end:
			printf("end\n");
			components = tcm->choice.end.components;
			break;

		case TCMessage_PR_continue:
			printf("continue\n");
			components = tcm->choice.Continue.components;
			break;

		case TCMessage_PR_abort:
			printf("abort\n");
			break;
	}

	if (components) {
		printf("%i components\n", components->list.count);

		for (i = 0; i < components->list.count; i++) {
			printf("Component #%i\n", i);

			component = components->list.array[i];

			switch (component->present) {
				case Component_PR_NOTHING:
					printf("nothing\n");
					break;

				case Component_PR_invoke:
					printf("invoke\n");
					arg = inap_decode(&component->choice.invoke, &type);
					printf("arg: type %s -> %p\n", type ? type->name : "n/a", arg);
					break;

				case Component_PR_returnResultLast:
					printf("returnResultLast\n");
					break;

				case Component_PR_returnError:
					printf("returnError\n");
					break;

				case Component_PR_reject:
					printf("reject\n");
					break;

				case Component_PR_returnResultNotLast:
					printf("returnResultNotLast\n");
					break;
			}
		}
	}

	return 0;
}
