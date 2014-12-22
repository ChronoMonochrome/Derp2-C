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
    float X, K;
    printf("vvedite X i K:\n");
    if (!scanf("%f%f", &X, &K)) {
             printf("only garbage found on input\n");
            // return -1;
    } 
    printf("X<0 i delitsya na K natselo?\n");
  
    if ((X<0) && ((abs(X)/K) == ((int)abs(X)/(int)K))) {
   
                      printf("true\n"); 
    
    } else {
                      printf("false\n"); 
    }
             
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
