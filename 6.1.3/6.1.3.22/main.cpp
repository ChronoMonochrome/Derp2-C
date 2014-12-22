#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int x, i, K;  
    int a[3] = {0, 0, 0};

    i = 0;
    printf("type third-digit integer x and K, e.g. '723 6'\n"); 
    if (!scanf("%d%d", &x, &K)) {
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
         printf("N = {%d, %d, %d}\n", a[2], a[1], a[0]); 
          printf("K = %d\n", K); 
           if ((a[0] + a[1] < K) && (a[2] > 5)) {
                     printf("(N[2] + N[1] < K) && (N[0] > 5) == true;\n"); 
           } else printf("(N[2] + N[1] < K) && (N[0] > 5) == false;\n"); 
    
    }         
    system("PAUSE");
    return EXIT_SUCCESS;
}
