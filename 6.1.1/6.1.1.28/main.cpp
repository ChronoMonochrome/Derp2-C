#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, y, z,a, b,c,d, f, res;
     printf("pow(cos(x),2)/sin(x) - x*y*z + (a*x*x+b*x+c)/(d*pow(x,3)-f) =\n");
    printf("type x y z a b c d f\n"); 
    if (!scanf("%f%f%f%f%f%f%f%f",&x, &y, &z, &a, &b, &c, &d, &f)){
         printf("only garbage found in input\n");
         //return -1;
         }
    res = pow(cos(x),2)/sin(x) - x*y*z + (a*x*x+b*x+c)/(d*pow(x,3)-f);
    if (sin(x) == 0 || (d*pow(x,3)-f) == 0)
            printf("zero division error, sin(x) == 0 or (d*pow(x,3)-f) ==0\n", res);  
    else 
    printf("pow(cos(x),2)/sin(x) - x*y*z + (a*x*x+b*x+c)/(d*pow(x,3)-f) = %f\n", res);
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
