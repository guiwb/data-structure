#include <stdio.h>

typedef struct
{
    int d, m, y;
} Date;

typedef struct
{
    int register_number;
    Date birthdate;
} Student;

void main()
{
    Student student;

    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &student.register_number);

    printf("Informe a data de nascimento do aluno [DD/MM/YYYY]: ");
    scanf("%d/%d/%d", &student.birthdate.d, &student.birthdate.m, &student.birthdate.y);

    printf("O aluno de matricula %d nasceu em %02d/%02d/%04d.", student.register_number, student.birthdate.d, student.birthdate.m, student.birthdate.y);
}