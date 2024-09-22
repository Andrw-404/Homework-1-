#include <stdio.h>
#include <string.h>
#include <locale.h>

int OccurrenceOfASubstring(const char* S, const char* S1) {
	int counter = 0;
	const char* tmp = S;
	while ((tmp = strstr(tmp, S1)) != NULL) {
		++counter;
		++tmp;
	}
	return counter;
}

int main(void) {
	setlocale(LC_ALL, "Russian");
	int result = OccurrenceOfASubstring("adgdadmfad", "ad");
	printf("Количество вхождений подстроки в строку: %d\n", result);
	return 0;
}
