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

//Урок 23 (C return statement 🔙)
double square(double x)
{
   double result = x * x;
   return result;
   // либо просто вместо кода 50-51 ввести:
   // return x * x;
}

//Урок 24 (C ternary operator)
int findMax(int x, int y)
{
   // эта строка означает тоже самое что и строка 86 (нужно удалить при запуске то или это)
   if (x > y)
   {
    return x;
   }
   else
   {
    return y;
   }
   // эта строка означает тоже самое что и строка 86 (нужно удалить при запуске то или это)

   return (x > y) ? x : y; 
}

int main()
{
    /* //lesson 21
    birthday ();
    birthday ();
    birthday (); //повторение команды void (8-11 строки)
    */

    /* //lesson 22
    char name [] = "Diyar";
    int age = 21;

    birthday(name,age);
    */

    /* //lesson 23
    double x = square(3.14);
    printf("%lf", x);
    */

    



    return 0;
}
