#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, y;
    printf("type x y\n"); 
    if (!scanf("%f%f", &x, &y)) {
           printf("only garbage found on input\n");
    } else {
           
           printf("exp(x) - (y^2+12xy-3x^2)/(18y-1)=%f",
           exp(x) - (y*y+12*x*y-3*x*x)/(18*y-1)
            );               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
