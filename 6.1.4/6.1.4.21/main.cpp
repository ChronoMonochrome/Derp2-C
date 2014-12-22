#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float x, y, r=3;
    bool k;
    printf("vvedite x y\n"); 
    if (!scanf("%f%f", &x, &y)) {
        printf("only garbage found in input\n");
    } else {
        k = (x >= -r && y <=r && x*x+y*y < r*r) || 
            (x<=6  && y<=3 && y <= 3 -  0.5*x);
        printf("(x;y) = (%f;%f), %s\n", x, y, k ? 
        "true, (x;y) v ukazannoy oblasti" :
        "false, (x;y) VNE ukazannoy oblasti" );                
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
