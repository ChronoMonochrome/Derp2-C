#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a, b, c; // числа
    unsigned int count = 0; // число отрицательных чисел
    printf("input variables a, b, c\n"); 
    if (!scanf("%f%f%f", &a, &b, &c)) {
        printf("only garbage found on input\n");
    } else {
            a < 0 ? count++ : count;
            b < 0 ? count++ : count;
            c < 0 ? count++ : count;
            
            printf("count of negative variables: %d\n", count);
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
