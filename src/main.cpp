
#include <stdio.h>
#include <math.h>
#include <assert.h>
extern "C"
{
#include "taylor_sine.h"
}


// Add your test cases for Exercise 1b,c) here

int main(int argc, char **argv){

    printf("%1f", taylor_sine(0.000,4));
    return 0; 
}
