#include <stdio.h>
#include <math.h>
#include <locale.h>


int incompleteQuotient(int firstNumber, int secondNumber, int* errorCode) {
	int counter = 0;
	if (secondNumber == 0) {
		*errorCode = 1;
		return 0;
	}
	if ((firstNumber >= 0 && secondNumber > 0) || (firstNumber <= 0 && secondNumber < 0)) {
		if (abs(firstNumber) < abs(secondNumber)) {
			*errorCode = 1;
		}
		else {
			while (abs(firstNumber) >= abs(secondNumber)) {
				firstNumber = firstNumber - secondNumber;
				counter += 1;
			}
		}
	}
	else {
		if (abs(firstNumber) < abs(secondNumber)) {
			*errorCode = 1;
		}
		else {
			while (abs(firstNumber) >= abs(secondNumber)) {
				firstNumber += secondNumber;
				counter += 1;
			}
			counter *= (-1);
		}
	}
	return counter;
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	int errorCode = 0;
	int result = incompleteQuotient(-432, 34, &errorCode);
	if (errorCode == 1){
		printf("Ошибка\n");
	}
	else {
		printf("Неполное частное: %d\n", result);
	}
}
