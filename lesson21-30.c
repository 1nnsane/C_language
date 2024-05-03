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
//Урок 25 (C function prototypes 🤖)
void hello(char[], int); //function prototype 


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

    /* // lesson 24
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    int max = findMax(3, 4);
    printf("%d", max);
    */

    /* //lesson 25
    // function prototype

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files
    char name[] = "Bro";
    int age = 21;
    hello(name, age);
    */


    return 0;
}

//lesson 25 (prototype)
void hello(char name[], int age)
{
   printf("\nHello %s", name);
   printf("\nYou are %d years old", age);
}