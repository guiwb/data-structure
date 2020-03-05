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

void readDate(char *, Date *);
void readStudent(Student *);

void main()
{
    int i;
    Student students[5];

    for (i = 0; i < 5; i++)
    {
        readStudent(&students[i]);
    }

    int dates_counter = 0;
    Date date, dates[5];

    readDate("", &date);

    for (i = 0; i < 5; i++)
        if (date.m == students[i].birthdate.m)
        {
            dates[dates_counter] = students[i].birthdate;
            dates_counter++;
        }

    for (i = 0; i < dates_counter; i++)
        printf("%02d/%02d/%04d\n", dates[i].d, dates[i].m, dates[i].y);
}

void readDate(char label[], Date *date_pointer)
{
    printf("Informe a data ");
    printf(label);
    printf(" utilizando o formato dd/mm/yyyy: ");
    scanf("%d/%d/%d", &date_pointer->d, &date_pointer->m, &date_pointer->y);
}

void readStudent(Student *student)
{
    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &student->register_number);
    readDate("de nascimento do aluno", &student->birthdate);
}