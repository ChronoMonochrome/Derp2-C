#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int N;
    float R, P, S;
    printf("vvedite kol-vo storon i radius opisannyi vokrug prav. mnogougolnika\n"); 
    if (!scanf("%d%f", &N, &R)){
         printf("only garbage found on input\n");
         }
    P = 2 * R * N * tan(M_PI/N);
    S = N / 4. / tan(M_PI/N); 
    printf("perimetr mnogougolnica = %f\n", P);
    printf("ploschad = %f\n", S);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
