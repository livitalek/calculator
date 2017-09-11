#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "function.h"

void calculatorBegin();
void calculatorHelp();

int main(int argc, char **argv) {
	char chMenu;
	bool flagMenu = true;
	while (flagMenu) {
		printf("1 - Begin\n2 - Help\n3 - Exit\n");
		chMenu = getchar();
		switch (chMenu) {
		case '1':
			calculatorBegin();
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

void calculatorBegin() {
	float numb1, numb2;
	char chIntoNumb;
	char chCalcBegin;
	bool flagCB = true;
	while (flagCB) {
		scanf("%f%c%f", &numb1, &chIntoNumb, &numb2 );
		system("clear");
		switch (chIntoNumb) {
		case '+':
			printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, myplus(numb1, numb2));
			break;
		case '-':
			printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, myminus(numb1, numb2));
			break;
		case '*':
			printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, mymultiplication(numb1, numb2));
			break;
		case '/':
			printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, mydivision(numb1, numb2));
			break;
		case '^':
			printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, mypower(numb1, numb2));
			break;
		default:
			printf("ERROE\n");
		}
		chCalcBegin = getchar();
		if (chCalcBegin == 27) {
			flagCB = false;
		}
	}
}
