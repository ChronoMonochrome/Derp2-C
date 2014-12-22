#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float p;
    printf("type variable p\n"); 
    if (!scanf("%f", &p)) {
        printf("only garbage found in input\n");
    } else {
         for (int i=0; i<4; i++) { 
                        printf("%f**%d=%f\n", p, i, pow(p,i));     
                }
           
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
