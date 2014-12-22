#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int A = 25, B = 100, C = 5, minutes, sum;
  
    printf("vvedite kol-vo min. razgovorov\n"); 
    if (!scanf("%d", &minutes)) {
        printf("only garbage found on input\n");
    } else {
            printf("A=25, B=100, C=5\n"
                   "schet za razgovory:\n"
                   ); 
            if (minutes < A)
                       printf("schet=B=%d\n", B);  
            else
                       printf("schet=%d + (%d - %d) * %d=%d\n", B, minutes, A, C,  B + (minutes - A) * C);
                        

      
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
