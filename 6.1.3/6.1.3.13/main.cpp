#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int x, y;
    printf("type x y\n"); 
    if (!scanf("%d%d", &x, &y)) {
        printf("only garbage found on input\n");
    } else {
            if (x<0 && y>0) {
                     printf("(%d;%d) v pervoy koord chetverti, true;\n", x, y); 
           } else printf("(%d;%d) NE v pervoy koord chetverti, false;\n", x, y); 
    
    }         
    system("PAUSE");
    return EXIT_SUCCESS;
}
