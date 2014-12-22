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

float herone_square(float a, float b, float c) 
{
    float p;
    
    p = 0.5 * (a + b + c);
    return p*(p-a)*(p-b)*(p-c);
    //return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a1, b1, c1; 
    float a2, b2, c2; // стороны треугольников
    
    printf("vvedite storony 1 treugol'nica :\n");
    if (!scanf("%f%f%f", &a1, &b1, &c1)) {
             printf("only garbage found on input\n");
            // return -1;
    } 
    
    printf("vvedite storony 1 treugol'nica :\n");
    
    if (!scanf("%f%f%f", &a2, &b2, &c2)) {
             printf("only garbage found on input\n");
           //  return -1;
    }
    float S1 = herone_square(a1, b1, c1);// площади треугольников
    float S2 = herone_square(a2, b2, c2);
    if (!is_more_than_zero(S1)) {
           printf("triangle 1 doesn't exist\n"); 
           //return -1;
    } 
    printf("square of 1st triangle(s1): %f\n", S1); 
    if (!is_more_than_zero(S2)) {
           printf("triangle 2 doesn't exist\n"); 
          // return -1;
    }  
    printf("square of 2nd triangle(s2): %f\n", S2);
    if (!is_more_than_zero(S1 - S2)) {
   
                      printf("S1 == S2: \n"
                             "true\n"); 
    
    } else {
                      printf("S1 == S2: \n"
                             "false\n"); 
    }
             
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
