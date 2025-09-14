#define PIE 3.14
#include <stdio.h>

int main(void) {
    float radius;
    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);
    printf("\nThe area of your circle is %f\n", radius * radius * PIE);
    return 0;
}
