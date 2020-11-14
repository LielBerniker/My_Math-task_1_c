#include <stdio.h>
#include "myMath.h"
 int main()
 {
     double number1,answer1,answer2;
   
     
     printf("Please insert a real number: ");
     scanf("%lf",&number1);
     // calculate the first function and insert it to answer1
     answer1 = Exponent((int)number1);
     answer2 = Power(number1,3);
     answer1 = add((answer1),(answer2));
     answer1 = sub((answer1),2.0);
     printf("The value of f(𝑥)= 𝑒^𝑥 + 𝑥^3 − 2  at the point %0.4lf is: %0.4lf\n",number1,answer1);
     // calculate the seconed function and insert it to answer1
    answer1 = mul(number1,3);
    answer2 = Power(number1,2);
    answer2 = mul(answer2,2);
    answer1 = add(answer1,answer2);
     printf("The value of f(𝑥)= 3x + 2X^2  at the point %0.4lf is: %0.4lf\n",number1,answer1);
     // calculate the fthird function and insert it to answer1
     answer1 = div(mul(Power(number1,3),4),5);
     answer2 = mul(number1,2);
     answer1 = sub(answer1,answer2);
     printf("The value of f(𝑥)= (4x^3)/5 - 2x  at the point %0.4lf is: %0.4lf\n",number1,answer1);
     
 }