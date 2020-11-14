#include "myMath.h"

double Exponent(int x)
{
    int conuter;
    double expo=1;
     // set the counter
    if(x>0)
    conuter = x;
    else
    conuter = -x;
    // multiply E ,x number of times
    while(conuter>0)
    {
     expo = expo*E;
     conuter--;
    }
    // if the power is negative return 1/expo
    if(x<0)
    {
    return 1/expo;
    }
    else
    {
        return expo;
    }
    
}
double Power(double x , int y)
{
    double pow=1;
    int counter;
    if(x==0)
    return 0;
    // set the counter
    if(y>0)
    counter = y;
    else
    counter = -y;
     // multiply x ,y number of times
    while(counter>0)
    {
       pow= pow*x;
       counter--; 
    }
    //if y is negative return 1/pow
    if(y<0)
    {
    return 1/pow;
    }
    else
    {
    return pow;
    }
}