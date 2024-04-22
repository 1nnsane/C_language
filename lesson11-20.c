//Урок 10 (C user input) Плохо понял, разобрать еще

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>  //с урок 18




int main(){
/*
    char name[25]; //массив 25 байт
    int age;

    printf ("what ur name\n");
    //scanf ("%s", &name); (читает только одно слово)
    fgets(name, 25,stdin); //читает всю строку, можно вписывать несколько слов
    name[strlen(name)-1] = '\0'; //отключает перенос принтф после кода - строки 10 


    printf("How old are you?\n");
    scanf("%d", &age);

    printf("hello %s, how are u\n",name);
    printf("You are %d years old\n", age);
*/

//Урок 11 про мат.библиотеку, перескочил, нужно вернуться потом
/*
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    
    printf("\n%lf", A); 
*/


//Урок 12 Программа для вычисления длины и площади окружности

/*const double PI = 3.14159;
double radius;
double circumference; //поиск радиуса окружности

//площадь окружности
double area;

printf ("enteer radius of circle");
scanf("%lf", &radius);

circumference = 2 * PI * radius; //формула решения длины окружности
area = PI * radius * radius; //формула решения площади окружности
printf ("circumference: %lf\n", circumference);
printf ("area: %lf\n", area);
*/

//Урок 13 (нахождение гипотенузы)
/*
double a;
double b;
double c;

printf ("Enter side a ");
scanf ("%lf", &a);

printf ("Enter side b ");
scanf ("%lf", &b);

c = sqrt (a*a + b*b);
printf ("Side C %lf", c);
*/

//Урок 14 (C if statements)
/*
int age;

printf("Enter age ");
scanf ("%d", &age);

if(age >= 18){
    printf ("You signed");
}
else if (age ==0){
    printf ("U cant sign up, u just born");
}
else if (age < 0){ 
    printf ("You wasnt burn");
}
else{ //если все строки выше не соблюдены, то совершается операция else в любом случае
    printf ("U too young");
}
*/

//Урок 15 (C switch statements)
// switch = A more efficient alternative to using many "else if" statements
//                 allows a value to be tested for equality against many cases
// альтернатива иф, елсе

char grade;

printf("\nEnter a letter grade: ");
scanf("%c", &grade);

switch (grade){
    case 'A':  
printf("Perfect\n");
break;
    case 'B':  
printf("Good\n");
break;
    case 'C':  
printf("Okay\n");
break;
    case 'D':  
printf("Not an F\n");
break;
    case 'F':  
printf("U failed!\n");
break;
default: //если ни одно значение не подходит, то
printf ("please use letter grades");
}



return 0;
}
