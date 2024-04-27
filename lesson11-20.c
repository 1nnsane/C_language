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

/*
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
*/

//Урок 16 (C temperature conversion program)
/*
используется библиотека <ctype.h>


char unit;
float temp;

printf ("\n Is the temperature in F or C? ");
scanf ("%c", &unit);

unit = toupper(unit); //если написал c то ответ выдаст неверно, а с этой командой он перенес на заглавную букву

if (unit == 'C'){
printf("The temp is currently in C");
}
else if (unit == 'F'){
printf("The temp is currently in F");
}
else {
printf("%c is not a valid unit");
}
*/

/*
//та же формула которая выводит температуру по формуле 
char unit;
float temp;

printf ("\n Is the temperature in F or C? ");
scanf ("%c", &unit);

unit = toupper(unit); //если написал c то ответ выдаст неверно, а с этой командой он перенес на заглавную букву

if (unit == 'C'){
printf("Enter the temp in celsius ");
scanf("%f", &temp);
temp = (temp * 9 / 5) + 32; 
printf ("The temp in Farenheit is: %.1f", temp); //
}
else if (unit == 'F'){
printf("Enter the temp in Farenheit ");
scanf("%f", &temp);
temp = ((temp - 32) * 5) / 9; 
printf ("The temp in Farenheit is: %.1f", temp); //
}
else {
printf("%c is not a valid unit");
}
*/

//Урок 17 
/*
char operator;
double num1;
double num2;
double result;

printf("Enter an operator (+ - * /) \n");
scanf ("%c", &operator);

printf("Enter number 1 \n");
scanf("%lf", &num1);

printf("Enter number 2 \n");
scanf("%lf", &num2);

switch (operator){
    case '+':
    result = num1 + num2;
    printf("result %lf", result);
    break;
    case '-':
    result = num1 - num2;
    printf("result %lf", result);
    break;
    case '*':
    result = num1 * num2;
    printf("result %lf", result);
    break;
    case '/':
    result = num1 / num2;
    printf("result %lf", result);
    break; 
default:
printf("%c is not valid\n", operator);
}
*/

//Урок 18 (C AND logical operator &&) Логический оператор ИЛИ
// logical operators = && (AND) checks if two or more conditions are true
/*
float temp = 25;
bool sunny = true;

if(temp >= 0 && temp <= 30 && sunny){
    printf("\nThe weather is good!");
}
else{
    printf("\nThe weather is bad!");
}
*/

//19 урок (C OR logical operator ||)
/*
float temp = 1;

if (temp <= 0 || temp >= 30){
    printf("Wheater is bad\n");
}
else {
    printf ("wheater is good\n");
}
*/

//Урок 20 (C NOT logical operator !)
bool sunny = true;

if (!sunny == true){
    printf("The wheater is cloudy\n");
}
else {
    printf ("The wheater is sunny\n");
}

return 0;
}
