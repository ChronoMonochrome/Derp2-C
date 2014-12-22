#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float n, d, a1;
    printf("vvedite pervyi chlen, znamenatel i chislo chlenov progressii\n"); 
    if (!scanf("%f%f%f", &a1, &d, &n)){
         printf("only garbage found on input\n");
         }

    printf("summa progressii = %f\n", 
                        (2 * a1 + d * (n - 1)) / 2 * n);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
