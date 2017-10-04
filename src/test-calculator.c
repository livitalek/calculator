#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "test-calculator.h"

bool number(char *input, double *output) {
    bool t = true;
    *output = 0;
    int i = 0, j = 0;
    int control = 0;
    while (input[control] != '\0') {
        if (input[control] == ' ') {
            break;
        }
        if (input[control] == '-') {
            break;
        }
        control++;
    }

    while (input[i] != '\0') {
        if (input[i] == ' ') {
            break;
        }
        switch (input[i]) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '-':
        case '.':
            break;
        default:
            t = false;
            break;
        }

        if (t == false ) {
            break;
        }
        i++;
    }

    j = 0;

    while (input[j] != '\0') {

            if (input[j] == ' ') {
                break;
            }

            if (input[j] == '-' && (input[j+1] > '9' || input[j+1] < '0')) {
                break;
            }

            if (input[j] == '.' && ((input[j+1] > '9' && input[j-1] > '9') || (input[j+1] < '0' && input[j-1] < '0'))) {
                j = 0;
                break;
            }

            j++;
    }

    if (t == true && (control == i || control == 0) && j != 0) {
        *output = atof(input);
    	return true;
	} else {
        return false;
    }
}

bool charIntoNumber(char *input, char *output) {
    int i = 0;
    bool t = true;

    i = 0;

    switch (input[i]) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
        break;
    default:
        t = false;
        break;
    }

    while (input[i] != '\0') {
        if (input[i] == ' ') {
            break;
        }
        i++;
    }

    if (t == true && i == 1){
        strncpy(output, input, 1);
        return true;
    } else {
        return false;
    }
}
