#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float ABS(float x) {
      return x<0 ? -x: x;
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, res;
    res = 1;
    printf("e^x - x - 2 + (1+x)^x\n");
    printf("type x\n"); 
    if (!scanf("%f", &x) ){
        printf("only garbage found on input\n");
}
    else {    
         res = exp(x) - x - 2 + pow((1+x), x);
         printf("result  = %f\n", res);
    }
              
    system("PAUSE");
    return EXIT_SUCCESS;
}
