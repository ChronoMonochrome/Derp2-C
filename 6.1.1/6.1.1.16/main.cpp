#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float ABS(float x)
{
      return  x > 0 ? x : -x;
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, res;
    printf("vvedite x\n"); 
    if (!scanf("%f", &x)) {
        printf("only garbage found on input\n");
    } else {
        res = ABS(x*x - pow(x, 3) ) - (7 * x) / (pow(x,3)- 15*x);
        printf("ABS(x*x - pow(x, 3) ) - (7 * x) / (pow(x,3)- 15*x) = %f \n", res);               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
