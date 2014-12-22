#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, res;
    int ddd;
    int nnn;
    printf("type float variable nnn.ddd\n"); 
    if (!scanf("%f", &x))
         printf("only garbage found in input\n");
    nnn = ((int)(x * 1000)) % 1000;
    ddd = x;
    
    res = nnn + ddd / 1000.;
    printf("nnn.ddd = %f", res); 
    system("PAUSE");
    return EXIT_SUCCESS;
}
