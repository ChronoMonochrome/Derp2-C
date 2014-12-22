#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float x, p, s, h, r, R; // сторона, периметр, площадь, высота, радиусы впис. и опис окружностей
    printf("zadaite storonu ravnostoronnego treugol'nika\n"); 
    if (!scanf("%f", &x)) {
        printf("only garbage found in input\n");
    } else {
        p = x*3; // perimeter
        s = p*p/(12.0*sqrt(3.0));
        h = 2*s/x;
        r = s/p;
        R = pow(x, 3.)/(4*s);
        printf("ploschad' treugolnika = %f \n", s);
        printf("vysota treugolnika = %f \n", h);  
        printf("radius vpis. okr. = %f \n", r);
        printf("radius opis. okr. = %f \n", r);               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
