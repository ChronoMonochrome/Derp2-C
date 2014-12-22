#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    char s;

    printf("type symbol\n"); 
    if (!scanf("%s", &s)) {
        printf("only garbage found in input\n");
    } else {

        printf("ord(s) = %d\n", (int)s);
        printf("chr(ord(s)+1) = %c, \n", s+1);    
        printf("chr(ord(s)-1) = %c, \n", s-1);
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
