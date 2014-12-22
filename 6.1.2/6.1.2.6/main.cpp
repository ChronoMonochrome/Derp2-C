#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x1, x2, y1, y2, res;
    printf("type x1, y1, x2, y2\n"); 
    if (!scanf("%f%f%f%f", &x1, &y1, &x2, &y2)){
         printf("only garbage found in input\n");
         return -1;
         }
    res = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("rasstoyanie meghdu (x1,y1) - (x2,y2) = %f\n", res);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
