#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

bool isDivisor(int m, int n) {
     if (n==0)
              return -1;
     float m0 = (float)m , n0 = (float)n;
     /*
      * если результат целочисленного деления совпал с обычным делением, то вернуть true
      */
     return (m0 / n0) == (m / n); 
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int a, b, c, k; // числа
    
    printf("input variables a, b, c, k\n"); 
    printf("k should be divisor of a, b or c\n"); 
    if (!scanf("%d%d%d%d", &a, &b, &c, &k)) {
        printf("only garbage found on input\n");
    } else {
            if (isDivisor(a, k) )
                            printf("k is divisor of a\n");
            if (isDivisor(b, k) )
                            printf("k is divisor of b\n");                           
            if (isDivisor(c, k) )
                            printf("k is divisor of \n"); 
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
