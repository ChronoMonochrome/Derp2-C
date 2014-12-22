#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a, b, c, m, n, d, D;
    float x1, x2, x3;
    
    printf("ax^2 + bx + c = 0\n");
    printf("mx + n = 0\n");
   
    printf("vvedite a b c m n d:\n");
    if (!scanf("%f%f%f%f%f%f", &a, &b, &c, &m, &n, &d)) {
             printf("only garbage found on input\n");
            // return -1;
    } 
    
    D = pow(b, 2) - 4 * a * c;
    x1 = (- b + sqrt(D))/a * 0.5;
    x2 = (- b - sqrt(D))/a * 0.5;
    x3 = -n / m;
    
     printf("{x1, x2, x3} = {%f, %f, %f}\n", x1, x2, x3);
    
    if (d == x1) { 
          if (d != x3)
                   printf("d == x1, true\n");
                    system("PAUSE");
    }
    
    if (d == x2) { 
          if (d != x3)
                   printf("d == x2, true\n");
                    system("PAUSE");
    }
    
    if (d == x3) { 
          if ((d != x2) && (d != x1))
                   printf("d == x3, true\n");
                    system("PAUSE");
    }
    
    printf("false, d - koren' oboih uravneniy ili ni odnogo iz nih");
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
