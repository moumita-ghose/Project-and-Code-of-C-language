/* Authorr : MOUMITA GHOSE
    TOPIC : DIFFERET TYPES OF ARITHMETIC OPERATORS
             (INCLUDING +, - , * , / , % , TYPE CASTING) 
*/


#include<stdio.h>
int main()
{
    int a=10,b=20;
    int sum;
    sum=a+b;
    printf("\n\nsum=%d\n",sum);
   
    int substract=a-b;
    printf("Substract = %d\n",substract);
    
    int multi=a*b;
    printf("Multiple = %d\n ",multi);

    int p=4,q=29,division_without_type_casting;
    division_without_type_casting=q/p;
    printf("Divison without typecasting = %d\n",division_without_type_casting);

    int x=3;
    float div;

    // understanding type casting
    div=(float)b/x;
    printf("Division with type casting = %3.5f\n",div);


    //printing float value without type casting
    float divi=b/(x*1.0);
    printf("printing float value without type casting(x*1.0) = %f\n",divi);
    float d=b*1.0/x;
    printf("printing float value without type casting(b*1.0) = %f\n",d);
   
   
   // to understand theb use of %3.5f concept
    float m=1000.20292929292;
    printf(" m = %2.3f \n\n",m);

   printf("\nusing mod Operation : \n");
   //p=4
   //q=29
   int mod1=p%q;
   printf("MOdulus (small number%% greater number) = %d\n",mod1);
   int mod2= q%p;
   printf("Modulus(greater number %% smaller number) = %d\n",mod2);

    return 0;

}
