
#include <stdio.h>
#include <math.h>
#include <assert.h>

extern "C"
{
    #include "taylor_sine.h"
    #include "stack.h"
}


// Add your test cases for Exercise 1b,c) here

int main(void)

{
    double test[6] = {0.0 , 0.4 , 0.9, 3.1415 , 9.0 , 15.0}; 

    for (int i = 0; i < 6; i++)
    {
        printf("testing Taylor Sine function: %lf\n", taylor_sine(test[i], 5));
        printf("Build in sinus function: %lf \n\n", sin(test[i])); 

    }

// The value "x" is most precise for the "taylor_sine" function the lower the value is compared to build in "sin" function
// we can get a more precise result if we increase the itterations of "taylor_sine" function. 
// but we will be limited by memory allocation if using this method of calculating sinus.

stack first; 
initialize(&first); 
push(5, &first);
printf("%d\n", pop(&first)); 
push(4, &first);
printf("%d\n", pop(&first));
printf("%d\n", empty(&first)); 

return 0; 




}