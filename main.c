#include <stdio.h>
#include <math.h>

double ideal(double height, char gender);

int main(void) {
  
  double height = 0;
  char gender;
  printf("Enter your gender. 'M' or 'F': ");
    scanf("%c",&gender);
  printf("Enter your height in meters: ");
    scanf("%lf",&height);
  printf("\n==============================\n\n");
  printf("Your ideal weight is: %gkg", ideal(height, gender));  
  return 0;
}

double ideal(double height, char gender){
    return gender == 'M' ? ((height * 72.7) - 58) : ((height * 62.1) - 44.7);
}
