#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

float to_rad(float deg)
{
      return deg * M_PI / 180;
}

float to_deg(float rad)
{
      return rad * 180 / M_PI;
}

float side(float angle_deg, float R)
{
      return 2 * R / sin(to_rad(angle_deg));
}

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float A, B, C, R;
    printf("vvedite ugly treugolnica i radius opisannoy okrughnosti\n"); 
    if (!scanf("%f%f%f%f", &A, &B, &C, &R)) {
         printf("only garbage found on input\n");

    }   else {
         if ((A + B + C) != 180) 
         {
                 printf("treugolnic ne suschestvuet\n"); 
                 system("PAUSE");
                 return EXIT_SUCCESS;   
         }
                 
         printf("dliny storon treugolnica\n");    
         printf("a = %f\n", side(A, R));
         printf("b = %f\n", side(B, R));
         printf("c = %f\n", side(C, R));
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
