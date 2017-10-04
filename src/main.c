#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "function.h"
#include "test-calculator.h"

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
    int sizeArrChar = 80;
    char strInputNumb1[sizeArrChar];
    char strInputchIntoNumb[sizeArrChar];
    char strInputNumb2[sizeArrChar];
    double numb1, numb2;
	char chIntoNumb;
	char chCalcBegin;
	bool flagCB = true;
	system("clear");
	while (flagCB) {
        scanf("%s %s %s %c", strInputNumb1, strInputchIntoNumb, strInputNumb2, &chCalcBegin);
        if (chCalcBegin == ';' || chCalcBegin == '.') {

            if (chCalcBegin == '.') {
                flagCB = false;
            }
            if ((number(strInputNumb1, &numb1) && number(strInputNumb2, &numb2) && charIntoNumber(strInputchIntoNumb, &chIntoNumb)) == false) {
                puts("ERROR");
            } else {
                switch (chIntoNumb) {
                case '+':
                    printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, calculatorPlus(numb1, numb2));
                    break;
                case '-':
                    printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, calculatorMinus(numb1, numb2));
                    break;
                case '*':
                    printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, calculatorMultiplication(numb1, numb2));
                    break;
                case '/':
                    printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, calculatorDivision(numb1, numb2));
                    break;
                case '^':
                    printf("%.2f %c %.2f = %.2f\n", numb1, chIntoNumb, numb2, calculatorPower(numb1, numb2));
                    break;
                }
            }
        } else {
            printf("ERROR\n");
        }
    }
    getchar();
}

void calculatorHelp() {
	char chCalcHelp;
	bool flagCalcHelp = true;
	while (flagCalcHelp) {
		system("clear");
		printf("Help in program 'Calculator'\n");
		printf("Data input: <number 1> character <number 2>\n");
		printf("Characters:\n");
		printf("\t+ - plus\n");
		printf("\t- - minus\n");
		printf("\t* - multiplication\n");
		printf("\t/ - division\n");
		printf("\t^ - power\n");
		chCalcHelp = getchar();
		if (chCalcHelp == 27) {
			flagCalcHelp = false;
		}

	}
}
