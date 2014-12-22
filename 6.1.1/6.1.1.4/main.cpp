#include <stdio.h>
#include <iostream>
#include <conio.h>
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
              printf("(x+y)/(y+1) + (xy-12)/(34+x) = %f\n",
                     (x+y)/(y+1) +(x*y-12)/(34+x));               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
