#include<stdio.h>
#include<math.h>
int main(void)
{
    float a, b, c , s , area, peri;
    printf("Enter the values of sides \n");
    scanf("%f %f %f ", &a, &b, &c);
    s = 0.5*(a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    peri = (a+b+c);
    printf("Area is %f\tPerimeter is %f\n", area, peri);
}
