#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float heron(float a, float b, float c)
{
      float p = (a + b + c)/2;
      
      return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float a, b, c, S;
    printf("vvedite storony treugolnica\n"); 
    if (!scanf("%f%f%f", &a, &b, &c)) {
        printf("only garbage found in input\n");
    } else {
           S = heron(a,b,c);
          // printf("ploschad treugolnica %f\n", S); 
           printf("vysoty treugolnica\n"); 
           printf("h_a = %f\n", 2*S/a);
           printf("h_b = %f\n", 2*S/b);
           printf("h_c = %f\n", 2*S/c);
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
