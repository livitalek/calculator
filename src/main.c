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
		system("clear");
		printf("1 - Begin\n2 - Help\n3 - Exit\n");
		chMenu = getchar();
		switch (chMenu) {
		case '1':
			calculatorBegin();
			break;
		case '2':
			calculatorHelp();
			break;
		case '3':
		case 27:
			system("clear");
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
	system("clear");
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
			break;
		}
		chCalcBegin = getchar();
		if (chCalcBegin == 27) {
			system("clean");
			flagCB = false;
		}
	}
}

void calculatorHelp() {
	char chCalcHelp;
	bool flagCalcHelp = true;
	while (flagCalcHelp) {
		system("clear");
		printf("Help in program 'Calculator'\n");
		printf("Data input: <number 1> character <number 2>\n");
		printf("Characters:\n");
		printf("\t+ - scaling\n");
		printf("\t- - subtraction\n");
		printf("\t* - multiplication\n");
		printf("\t/ - division\n");
		printf("\t^ - degree\n");
		chCalcHelp = getchar();
		if (chCalcHelp == 27) {
			flagCalcHelp = false;
		}
	
	}
}

  
