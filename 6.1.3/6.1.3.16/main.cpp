#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float abs(float a)
{
    if  (a < 0) return -a;
    return a;
}

/* 
 * вычисление с переменными типа float может давать погрешности 
 * 1e-16 - величина допустимой погрешности
 */
bool is_more_than_zero (float a)
{
      return (abs(a) > 1e-16);               
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float N, tmp;
    printf("vvedite N:\n");
    if (!scanf("%f", &N)) {
             printf("only garbage found on input\n");
            // return -1;
    } 
    printf("N yavlyaetsya tochnym kvadratom?\n");
    tmp = sqrt(N);
    if (tmp == (int)tmp) {
   
                      printf("true\n"); 
    
    } else {
                      printf("false\n"); 
    }
             
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
