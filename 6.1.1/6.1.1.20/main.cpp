#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float x, y;
    printf("type x y\n"); 
    if (!scanf("%f%f", &x, &y)) {
           printf("only garbage found on input\n");
    } else {
           printf("(1 + sin(sqrt(x+1)))/(cos(12y-4))=%f\n",
           (1 + sin(sqrt(x+1)))/(cos(12*y-4))
            );               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
