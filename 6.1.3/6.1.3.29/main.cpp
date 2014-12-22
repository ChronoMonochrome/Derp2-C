#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    float N, K;
   
    printf("N dvyhznachnoe i kratno K?\n");
    printf("vvedite N K\n");
    if (!scanf("%f%f", &N, &K)) {
             printf("only garbage found on input\n");
            // return -1;
    } 
    
    if (N < 100 && ((N/K)==((int)N/(int)K)))
           printf("true\n");
    else
           printf("false\n");
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
