#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

static unsigned int age[] = {8, 19, 55};

int main(int argc, char *argv[])
{
    int x;
    printf("vvedite vozrast\n"); 
    if (!scanf("%d", &x)) {
        printf("only garbage found on input\n");
    } else {
            if (x < age[0])
                    printf("vozrast %d < %d, doshkol'nik\n", x, age[0]);
            else if (x < age[1])
                    printf("vozrast %d < %d, uchenik\n", x, age[1]);
            else if (x < age[2])
                    printf("vozrast %d < %d, rabotnik\n", x, age[2]);
            else 
                    printf("vozrast %d >= %d, pensioner\n", x, age[2]);
    
    }         
    system("PAUSE");
    return EXIT_SUCCESS;
}
