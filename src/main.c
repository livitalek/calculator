#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "function.c"

int main(int argc, char **argv) {
	char chMenu;
	bool flgMenu = true;
	while (flagMenu) {
		chMenu = getchar();
		printf("1 - Begin/n2 - Help/n3 - Exit")
		switch (chMenu) {
		case '1':
			break;
		case '2':
			break;
		case '3':
		case 27:
			flagMenu = false;
			break;
		}
	}
}
