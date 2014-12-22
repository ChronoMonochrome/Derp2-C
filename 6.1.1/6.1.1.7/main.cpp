#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float ABS(float x) {
      return x<0 ? -x: x;
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, y, res, tmp;
    res = 1;
    printf("log((y-sqrt(|x|) * (x - y/(x+x^2/4)))");
    printf("type x y\n"); 
    if (!scanf("%f%f", &x, &y))
        printf("only garbage found in input\n");
    else {    
         tmp = ( y-sqrt(ABS(x)) ) * (x - y/(x+x*x*0.25));
         if (tmp>0 && tmp!=1) { 
                   res = log(  tmp );
                   printf("%f\n", res);   
         }     else          {
               printf("can't calculate log(%f)\n", tmp);
               }
    }
              
    system("PAUSE");
    return EXIT_SUCCESS;
}
