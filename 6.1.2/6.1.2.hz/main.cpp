#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a,b,c, D, x1, x2;
    printf("type variables a b c\n"); 
    if (!scanf("%f%f%f", &a, &b, &c)) {
        printf("only garbage found in input\n");
    } else {
         D = b*b - 4*a*c;
         
         x1 = (-b + sqrt(D))*0.5*a;
         x2 = (-b - sqrt(D))*0.5*a;
         
         printf("%f*x^2+%fx+%f=0\n"
                "x1 = %f, x2 = %f\n",
                a, b, c, x1, x2);
           
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
