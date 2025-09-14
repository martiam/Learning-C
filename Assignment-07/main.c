#include <stdio.h>
#include <math.h>

int main(void) {
  float a;
  float b;
  float c;
  printf("Enter the value of variable 'A': ");
  scanf("%f", &a);
  printf("Enter the value of variable 'B': ");
  scanf("%f", &b);
  printf("Enter the value of variable 'C': ");
  scanf("%f", &c);
  float sqrt_det = sqrt(b * b - (4 * a * c));
  float plus_result = ( (-1) * b + sqrt_det ) / ( 2 * a );
  float minus_result = ( (-1) * b - sqrt_det ) / ( 2 * a );
  printf("The solution using the '+' operartor is: %f\n", plus_result);
  printf("The solution using the '-' operartor is: %f\n", minus_result);
}
