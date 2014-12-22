#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float rad_to_deg(float rad)
{
      return rad*180/M_PI;
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, y, r, deg_phi;
    printf("x y\n"); 
    if (!scanf("%f%f", &x, &y)) 
         printf("only garbage found on input\n");
    printf("vvedeno kompleksnoe chislo %#02f+%#04fi\n", x, y);
    
    r = sqrt ( x*x + y*y);
    
    deg_phi =  rad_to_deg(atan(y/x));
    printf("trigonometr. forma: %#04f(cos(%#04f)+isin(%#04f))", 
                          r, deg_phi, deg_phi);
    system("PAUSE");
    return EXIT_SUCCESS;
}
