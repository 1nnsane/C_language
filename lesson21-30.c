#include <stdio.h>
#include <string.h> //урок 26,35


//Урок 21 (С functions 📞)
//создание функции void, для повтора команды, вместо того чтобы писать 12 раз printf

void birthday () //21 Урок
{
    printf("Happy Birthday\n");
    printf("Happy Birthday\n");
    printf("Happy Birthday\n");
    printf("Happy Birthday to you\n");
}

int main()
{
    birthday ();
    birthday ();
    birthday (); //повторение команды void (8-11 строки)
    return 0;
}