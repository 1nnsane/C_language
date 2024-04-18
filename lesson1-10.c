#include <stdio.h>
#include <stdbool.h> //69 строка (для bool массива)

int main(){
    printf("Or hate it\n");
    printf("I love pizza\n");
    
    //комментарий однострочный
    
    /*
     многострочный коммент
     */
    
    
    /* \n - new line
     \t tab - ravnomernyj otstup
     */
    printf("1\t2\t3\t\n4\t5\t6\t\n7\t8\t9\t\n");
    
    // ввод "" внутри Printf --> отделить перед знаком - \"
    printf("\"I hate pizza\" - said John\n");
    printf("'i love pizza' said he\n");
    
    
    //Урок 5 (С переменные)
    // variable (переменная) - выделенное место в памяти для хранения значения.
    //
    int x; //декларация
    x=123; //инициализация
    int y=321; //декларация+инициализация
    
    int age = 21; //integer (21- целое число)
    float gpa = 2.05; //floating point number - число с плавающей запятой
    char grade = 'C'; //single character (1 значение)
    char name[] =  "Bro"; //array of character (массив символов) если есть []
    
    /*мы обращаемя к имени переменной (int,float,char), чтобы получить доступ к сохраненному значению (21, 2.05, c, bro)
     переменные используются для хранения значений
     чтобы указать переменную - надо указать какой тип данных
     */
    
    printf ("Hello %s\n",name);
    printf ("You are %d years old\n", age);
    printf ("Your averge grade is %c\n", grade);
    printf ("Your gpa is %f\n", gpa);
    
    
    
    //Урок 5 (C data types)
    
    //floar - хранит 4 байта (32 бит) - 6-7 цифр %f
    float c = 3.141592;
    printf("%f\n", c);  //float
    //чтобы отобразить больше цифр после запятой (после 6ой, надо добавить 0.(числа отображаемых после точки)f\n, c).
    // но он отображает значение менее точно чем double d
    printf("%0.15f\n", c);
    
    
    
    //double d = 3.1415925454544545 -8 байт (64 бит) - 15-16 цифр %lf
    double d = 3.1415925454544545;
    printf("%lf\n", d); //double
    //(повтор 51 строки)чтобы отобразить больше цифр после запятой (после 6ой, надо добавить 0.(числа отображаемых после точки)d\n, d).
    //отображает значения точнее чем floar
    printf("%0.15lf\n", d);
    
    
    
    //bool значение включает библиотека #include <stdbool.h>
    //bool e = true; исп 1 байт (true or false) %d . поэтому представляется в двоичной системе: 1(истина), 0 (ложь)
    bool e = true;
    printf("%d истина\n",e);
    bool ee = false;
    printf("%d ложь\n",ee);
    
    
    
    //char
    char f = 120; //1 byte (-128 to +127) %d(целое число) or %c (табл ASCII)
    printf ("age - %d\n", f); //отображает то же целое число
    printf ("age - %c\n", f); //отображает значение числа в таблице ASCII
    
    unsigned char g = 178; //1 byte (0 to +255) %d or %c (переменная без знака, игнорирует отрицательные)
    printf("ur hight - %d\n",g);
    
    
    
    //short int
    short int h=32767; //2 bytes (-32,768 to +32,767) %d
    printf ("km  %d\n",h);
    
    unsigned short int i = 65535; //2 bytes (0 to 65535) %d
    printf ("km  %d\n",i);
    
    //если указать цифры больше доступных - то будет overflow (переполнение)
    short int hh=32777;
    printf ("km  %d\n",hh);
    
    //можно писать просто short без int, значение не поменяется
    short hhh=32000;
    printf ("km  %d\n",hhh);
    
    
    
    //int, unsigned int
    int j = 2147483647; //4 bytes (-2147483648 to +2147483647) %d
    unsigned int k = 4294967295; //4 bytes (o to +4294967295) %u
    
    printf ("int %d\n",j); //int
    printf ("unsigned int %u\n",k); //unsigned int
    
    
    //long long int, unsigned long long int
    long long int l = 9223372036854775807; //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; //8 bytes (0 to +18 quintillion) %llu
    //при вводе: unsigned long long int m = 18446744073709551615; --> будет предупреждение, чтобы запустить без него, надо добавить в конце переменной цифры U
    
    printf ("longlongint %lld\n",l);
    printf ("unsigned longlongint %llu\n",m);
    //6 урок  (C format specifiers)
    //спецификатор формата % определяет и форматирует тип отображаемых данных 
    //%c = character -символ
    //%s= string - строка (массив символов)
    //%f= float число с плавающей запятой
    //%lf= double двойной
    //%d= integer (int) целое число 

    //%.1= десятичная точность
    //%1= минимальная ширина поля
    //%-=выравнивание по левому краю
    //   %-9.3f\n", name); 
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;
    printf ("Item1: $%-9.3f\n", item1);
    printf ("Item2: $%-9.3f\n", item2);
    printf ("Item3: $%-9.3f\n", item3);

    return 0;
}