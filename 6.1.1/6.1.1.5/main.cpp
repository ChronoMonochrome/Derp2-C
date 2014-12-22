#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float ABS(float x){
      return x > 0 ? x: -x;
}

int main(int argc, char *argv[])
{
    float x, y;
    printf("type x y\n"); 
    if (!scanf("%f%f", &x, &y)) {
        printf("only garbage found on input\n");
    } else {
              printf("(3 + e^(y-1))/(1 + x^2 * |y - tan(x)|)= %f\n",
                     (3 + exp(y-1)) / (1 + x*x * ABS(y - tan(x))));               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
