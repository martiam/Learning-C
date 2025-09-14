#include <stdio.h>
#define H_SEC 3600
#define M_SEC 60

int main(void) {
    int input;
    printf("Enter the amount of seconds: ");
    scanf("%d", &input);
    int seconds = input;
    int hours = seconds / H_SEC;
    seconds = seconds - (hours * H_SEC);
    int minutes = seconds / M_SEC;
    seconds = seconds - (minutes * M_SEC);
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", input, hours, minutes, seconds);
    return 0;
}
