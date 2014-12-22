#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float x, y;
    bool k;
    printf("vvedite x y\n"); 
    while (true) {
    if (!scanf("%f%f", &x, &y)) {
        printf("only garbage found in input\n");
    } else {
        k = ((y <= 7*(x+5) / 6) &&
            (y <= 4 - 2*(x-1)) &&
            (y >= (5 - x) / 10 - 4)) &&
            ((x >= -5) && (x <= 5) &&
            (y >= -4) && (y <= 4))
            ;
        printf("(x;y) = (%f;%f), %s\n", x, y, k ? 
        "true, (x;y) v ukazannoy oblasti" :
        "false, (x;y) VNE ukazannoy oblasti" );                
    }
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
