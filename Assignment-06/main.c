#include <stdio.h>

int main(void) {
    int numerator;
    int denominator;
    printf("Enter a numerator: ");
    scanf("%d", &numerator);
    printf("Enter a denominator: ");
    scanf("%d", &denominator);
    if (denominator > numerator) {
	printf("There is NO remainder!\n");
	return 0;
    }
    while (numerator >= denominator) {
	numerator -= denominator;
    }
    if (numerator == 0) {
	printf("There is NO remainder!\n");
	return 0;
    }
    printf("There is a remainder!\n");
    return 0;
}
