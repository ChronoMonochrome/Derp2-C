#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a, b, c, res;
    printf("vvedite a b c\n"); 
    if (!scanf("%f%f%f", &a, &b, &c)) {
        printf("only garbage found in input\n");
    } else {
        res = b + sqrt(b*b + 4* a *c)/ 2/a - pow(a,3)*c + pow(b,-2);
        printf("b + sqrt(b*b + 4* a *c)/ 2/a - pow(a,3)*c + pow(b,-2) = %f \n", res);               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
