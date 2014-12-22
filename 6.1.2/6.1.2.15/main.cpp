#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x_n, x, res;
  
    printf("type variable x\n"); 
    if (!scanf("%f", &x)) {
        printf("only garbage found on input\n");
    } else {
            x_n = x;
            res +=6 - 5*x_n;
            x_n*=x;
            res+=4*x_n;
            x_n*=x;
            res-=3*x_n;
            x*=x;
            res+=2*x_n;
    printf("2*x^4 - 3*x^3 + 4*x^2 - 5*x - 6 = %f\n", res);               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
