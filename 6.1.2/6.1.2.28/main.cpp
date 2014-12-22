#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float H, R, V;
    printf("vvedite vysoty i radius tsilindra\n"); 
    if (!scanf("%f%f", &H, &R))
         printf("only garbage found in input\n");
    else {
          V = M_PI * R * R * H;
          printf("ob'em tsilindra = %f, ob'em konusa = %f\n",
                        V, 1/3. * V);
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
