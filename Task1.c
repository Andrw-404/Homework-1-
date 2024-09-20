#include <stdio.h>
#include <locale.h>

void counterOfZero(int array[]) {
    setlocale(LC_ALL, "Russian");
    int i = 0;
    while (array[i] == 0) {
        ++i;
    }
    printf("Количество нулевых элементов в массиве: %d\nThe numbers of zero elements in the array: %d\n", i, i);
}
