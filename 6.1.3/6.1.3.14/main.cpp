#include <stdio.h>
#include <iostream>
#include <conio.h>
//#include <clocale>

using namespace std;

int main(int argc, char *argv[])
{
    //setlocale(LC_ALL, "Rus"); // вызов функции настройки локали
    int x1, y1, x2, y2, x, y; 
    printf("(x1, y1) i (x2, y2) - koordynaty verhney levoy"
     "i pravoy nighnei vershin pryamougolnica."
     "А(x, y) prinadleghit pryamougolnicu?\n" );
    printf("vvedite x y x1 y1 x2 y2\n"); 
     printf("naprimer 3 3 0 5 5 0\n"); 
    if (!scanf("%d%d%d%d%d%d", &x, &y, &x1, &y1, &x2, &y2)) {
        printf("only garbage found on input\n");
    } else {
           
           if ((x >= x1) && (x <= x2) && (y <= y1) && (y >= y2))
             printf("tochka A(x,y) v oblasty pryamougolnica s vershinami (x1,y1) i (x2,y2), true\n");
            else
             printf("tochka A(x,y) vne oblasty pryamougolnica s vershinami (x1,y1) i (x2,y2), false\n");  
    
    }         
    system("PAUSE");
    return EXIT_SUCCESS;
}
