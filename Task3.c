#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Rus");
	int firstNumber = 0;
	int secondNumber = 0;
	int result = 0;
	printf("Введите делимое и делитель:\n");
	scanf_s("%d %d", &firstNumber, &secondNumber);
	if (secondNumber == 0) {
		printf("На ноль делить нельзя!!!");
		exit(0);
	}
	if ((firstNumber >= 0 && secondNumber > 0) || (firstNumber <= 0 && secondNumber < 0)) {
		if (abs(firstNumber) < abs(secondNumber)) {
			exit(0);
		}
		else {
			while (abs(firstNumber) >= abs(secondNumber)) {
				firstNumber -= secondNumber;
				result += 1;
			}
		}
	}
	else {
		if (abs(firstNumber) < abs(secondNumber))
			result = 0;
		else {
			while (abs(firstNumber) >= abs(secondNumber)) {
				firstNumber += secondNumber;
				result += 1;
			}
			result *= (-1);
		}
	}
	printf("Неполное частное = %d\n", result);
	return 0;
}
