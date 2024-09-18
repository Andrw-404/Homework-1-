#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	char string[100];
	int counter = 0;
	fgets(string, 100, stdin);
	bool correctBalance = true;
	for (int i = 0; i < strlen(string); ++i) {
		if (string[i] == '(')
			counter += 1;
		else if (string[i] == ')')
			counter -= 1;
		if (counter < 0)
			correctBalance = false;
	}
	if (correctBalance)
		printf("The brackets are balanced\n");
	else
		printf("The brackets are not balanced\n");
}
