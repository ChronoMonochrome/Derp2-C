#include <iostream>
#include <locale>
#include <conio.h>
 
int main()
{
    // setlocale(LC_ALL, "Russian");
    printf("just type something ;)\n");
    char c;
    while( (c = _getch()) != 27)
    {
        if (isdigit(c))
            std::cout << c << " - digit" << std::endl;
        else { 
            if (isalpha(c))
                std::cout << c << " - letter" << std::endl;
        }
    }
    return EXIT_SUCCESS;
}
