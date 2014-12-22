#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, y, res;
    printf("type x y\n"); 
    if (!scanf("%f%f", &x, &y)){
         printf("only garbage found in input\n");
         //return -1;
         }
    res = cos(x)/(M_PI - 2*x) + 16*x*cos(x*y)-2;
    printf("cos(x)/(M_PI - 2*x) + 16*x*cos(x*y)-2 = %f\n", res);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
