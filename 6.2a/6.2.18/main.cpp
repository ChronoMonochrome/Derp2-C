#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int t, p, res_A, res_B;
  
    printf("vvedite  t p\n"); 
    if (!scanf("%d%d", &t, &p)) {
        printf("only garbage found on input\n");
    } else {
           res_A = t > p;
           printf ("a) %s\n", res_A ? "t > p" : (t!=p ? "t < p" : "t == p"));
           res_B = max (t, p);
           printf ("b) max(t, p) = %d\n", res_B);
    }
             
    system("PAUSE");
    return EXIT_SUCCESS;
}
