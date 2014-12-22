#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float x, y, tmp1, tmp2;
  
    printf("vvedite x y\n"); 
    if (!scanf("%f%f", &x, &y)) {
        printf("only garbage found on input\n");
    } else {
            printf("(x, y) == (%f, %f)\n", x, y);
           
            printf("posle pereraspredeleniya\n", x, y);
            tmp1 = min(x, y);
            tmp2 = max(x, y);
            y = tmp1;
            x = tmp2;
            
            
            printf("(x, y) == (%f, %f)\n", x, y);
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
