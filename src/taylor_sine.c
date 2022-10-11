#include "taylor_sine.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

//function to calculate the factorial of x
int factorial(int x){
    if (x==0) 
        return 1;
    else
        return(x*factorial(x-1)); 
}

//function for finding sin(x) with Taylor Series up to n'th terms
double taylor_sine(double x, int n){ //function
    int y = 3; //initial exponentiation of x^n | y is used as a counter as well
    double power = 5; //second exponentiation of x^n
    double result = 0.0; //end result of function

    result = x-(pow(x,3)/factorial(3)); // first term of Taylor Series
    for(y; y<=n; y++); {
        if(y % 2 == 0){ //if there isn't a rest after dividing a sequence / term then the result will be result + 
             result = result + (pow(x,power)/factorial(power)); 
        }
        else
            result = result - (pow(x,power)/factorial(power)); //if there is a rest after dividing a sequence / term then the result will be result -
    }
    
    return result;  //the value we want to return to the user
}
