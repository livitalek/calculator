#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "function.c"

int main(int argc, char **argv) {
	char chMenu;
	bool flagMenu = true;
	while (flagMenu) {
		printf("1 - Begin\n2 - Help\n3 - Exit\n");
		chMenu = getchar();
		switch (chMenu) {
		case '1':
			break;
		case '2':
			break;
		case '3':
		case 27:
			flagMenu = false;
			break;
		default:
			break;
		}
	}
	return 0;
}
