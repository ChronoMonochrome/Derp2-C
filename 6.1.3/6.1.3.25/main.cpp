#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int x, i, sum;  
    int a[3] = {0, 0, 0};
    
    
    sum = 0;
    i = 0;
    printf("type three-digit integer x\n"); 
    if (!scanf("%d", &x)) {
        printf("only garbage found on input\n");
    } else {
        // for (i = 0; i<3; i++); { 
                    //  printf("x[%d]: %d\n", i, x);
                      a[0] = x%10;
                      x/=10;
                     // printf("x[%d]: %d\n", i, x);
                      a[1] = x%10;
                      x/=10;
                     // printf("x[%d]: %d\n", i, x);
                      a[2] = x%10;
                      x/=10;
        // }
           printf("sum of some of two numbers == third number:\n"); 
           if (a[0] + a[1] == a[2] || 
               a[1] + a[2] == a[0] || 
               a[0] + a[2] == a[1]) {
                     printf("true;\n"); 
           } else printf("false;\n"); 
    
    }         
    system("PAUSE");
    return EXIT_SUCCESS;
}
