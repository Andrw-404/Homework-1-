#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int Balance(char string[]) {
	int counter = 0;
	int i = 0;
	while (string[i] != '\0') {
		if (string[i] == '(') {
			counter++;
		}
		else if (string[i] == ')') {
			counter--;
		}
		if (counter < 0) {
			break;
		}
		i++;
	}
	return counter;
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	char string[] = { "((()))"};
	if (Balance(string) == 0) {
		printf("Баланс скобок соблюдён\n\n");
	}
	else {
		printf("Баланс скобок нарушен\n\n");
	}
}
