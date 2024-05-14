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




   //урок 26 
   // функции (154-155строка) strlwr(string1); strupr(string1); не работают в стандартной библиотеке С


   char string1[] = "Bro";
   char string2[] = "Code";

   //strlwr(string1); не работает                               // converts a string to lowercase
   //strupr(string1); не работает                            // converts a string to uppercase
   //strcat(string1, string2); не работает              // appends string2 to end of string1
   //strncat(string1, string2, 1); не работает        // appends n characters from string2 to string1
   //strcpy(string1, string2); не работает            // copy string2 to string1
   //strncpy(string1, string2, 2); работает      // copy n characters of string2 to string1

   //strset(string1, '?');        //sets all characters of a string to a given character
   //strnset(string1, 'x', 1);  //sets first n characters of a string to a given character
   //strrev(string1);             //reverses a string

   printf("%s", string1);


   // 2 часть кода

   char string1[] = "Bro";
   char string2[] = "Code";

   int result = strlen(string1);                          // returns string length as int
   //int result = strcmp(string1, string2);         // string compare all characters
   //int result = strncmp(string1, string2, 1);   // string compare n characters
   //int result = strcmpi(string1, string1);        // string compare all (ignore case)
   //int result = strnicmp(string1, string1, 1);  // string compare n characters (ignore case)

   printf("%d", result);


   if(result == 0)
   {
      printf("These strings are the same");
   }
   else
   {
      printf("These strings are not the same");
   }


   //lesson 27 ((C for loops 🔁)
   // for loop = repeats a section of code a limited amount of times
   /*
   for(int i = 1; i <= 10; i++)
   {
      printf("%d\n", i);
   }
   */

   /*
   //lesson 28 (C do while loop 🤸‍♂️)
   // while loop = repeats a section of code possibly unlimited times. 
   // WHILE some condition remains true
   // a while loop might not execute at all

   char name [25];
   printf ("Whats ur name?: \n");
   fgets (name, 25, stdin);
   name [strlen(name) - 1] = '\0';

   while (strlen(name) == 0) //если в терминале ввести пробел, то будет писать, ты не ввел данные
   {
      printf("U didnt enter ur name!\n");
      printf ("Whats ur name?: \n");
      fgets (name, 25, stdin);
      name [strlen(name) - 1] = '\0';
   }
   printf("Hello %s",name);
   */


   //lesson 29
   /*
   // while loop = checks a condition, THEN executes a block of code if condition is true
   // do while loop = always executes a block of code once, THEN checks a condition
   int number = 0;
   int sum = 0;
   do{
      printf("Enter a # above 0: ");
      scanf("%d", &number);
      if(number > 0)
      {
         sum += number;
      }
   } while(number > 0);
   
   printf("sum: %d", sum);
   */


   /*
   //lesson 30 (C nested loops ➰)
   int rows; 
   int columns;
   char symbol;

   printf("Enter # of rows: \n");
   scanf("%d", &rows);

   printf("Enter # of columns: \n");
   scanf("%d", &columns);

   scanf("%c"); //убирает пробел после scanf("%d", &columns); 


   printf("Enter a symbol to use: ");
   scanf("%c", &symbol);

   for(int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= columns; j++)
      {
         printf("%c", symbol); 
      }
      printf("\n");
   }
   */

   
   // Урок 31 (C break vs continue 🥊)
   // continue = skips rest of code & forces the next iteration of the loop
   // break = exits a loop/switch

   for(int i = 1; i <= 20; i++)
   {
      if(i == 13)
      {
         continue; //пропустит число 13 и продолжит команду до 20
         //break; //закончит на 13ом
      }
      printf("%d\n", i);
   }
   
   
   // lesson 32 ()
   // array = a data structure that can store many values of the same data type.

   //double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
   double prices[5];
   prices[0] = 5.0;
   prices[1] = 10.0;
   prices[2] = 15.0;
   prices[3] = 25.0;
   prices[4] = 20.0;
   printf("$%.2lf", prices[0]);
   

   return 0;
}

//lesson 25 (prototype)
void hello(char name[], int age)
{
   printf("\nHello %s", name);
   printf("\nYou are %d years old", age);
}