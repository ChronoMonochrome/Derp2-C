#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int x, res;
    res = 1;
    printf("type four-digit integer x\n"); 
    if (!scanf("%d", &x)) {
        printf("only garbage found in input\n");
    } else {
         for (int i=0; i<4; i++) { 
                        res *= x%10;
                        x/=10;
                }
    printf("result of multiplication digits of x = %d\n", res);               
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
