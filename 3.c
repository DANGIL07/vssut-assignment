#include <stdio.h>
int main() {
   float radius,diameter,circumference,area ;
   printf("the radius of the circle is ");
   scanf("%f",radius);
   diameter= 2*radius;
   area=3.14*(radius*radius);
   circumference=2*3.14*radius;
   printf("the diameter of the ciircle is %f", diameter);
   printf("the area of the circle is %f", area);
   printf("the circumference of the circle is %f",circumference);
   return 0;
}