#include <stdio.h>

#define VERSION     1       // Текущая версия программы


// Прототип функции для вывода информации о программе
void print_prog_info(void);


int main(){
    // Выведем информацию о программе
    print_prog_info();
    
    // Считаем число из консоли
    int a;
    printf("Input any number: ");
    scanf("%d", &a);

    // Выведем результат обработки числа
    if (a == 0){
        printf("Input zero number\n");
    }
    else if (a > 0){
        printf("Input positive number\n");
    }
    else{
        printf("Input negative number\n");
    }
    
    printf("End of program");

    return 0;
}


/*
    Функция для вывода информации о версии программы
    и об её авторе
*/
void print_prog_info(){
    printf("Version: %d\t", VERSION);
    printf("Author: Roman\n");
}



/* *******************************************************************

/---------------------------------------------------------------------

Примерный вид программы после работы препроцессора: 
все комментарии убраны, define раскрыты, 
реализация используемых функций из подключённых библиотек вставляются
прямо в файл.

/---------------------------------------------------------------------

int printf(...){
    Реализация функции для вывода информации в консоль
}

void print_prog_info(){
    printf("Version: %d\t", 1);
    printf("Author: Roman\n");
}

int main(){
    print_prog_info();
    
    int a;
    printf("Input any number: ");
    scanf("%d", &a);

    if (a == 0){
        printf("Input zero number\n");
    }
    else if (a > 0){
        printf("Input positive number\n");
    }
    else{
        printf("Input negative number\n");
    }
    
    printf("End of program");

    return 0;
}


******************************************************************* */