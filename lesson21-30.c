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

//Урок 22 
//функция int не может видеть данные с функции void
//надо вписать код как на строке 37, и ввести данные функций name age B int, void = (с типом данных char/int) (26,37 строки)
void birthday (char name[],int age)
{
printf("\nHappy birthday dear %s", name); //строка 33
printf("\nNow you a %d years old!", age); //строка 34
}

int main()
{
    /* //lesson 21
    birthday ();
    birthday ();
    birthday (); //повторение команды void (8-11 строки)
    */

    char name [] = "Diyar";
    int age = 21;

    birthday(name,age);




    return 0;
}
