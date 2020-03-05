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
void checkAge(Date, Date);
int getAge(Date, Date);
int concatMonthAndDay(Date);

void main()
{
    Date now;
    int rep = 1;

    readDate("atual", &now);

    do
    {
        Student student;

        printf("Informe o numero de matricula do aluno: ");
        scanf("%d", &student.register_number);

        readDate("de nascimento do aluno", &student.birthdate);

        if (student.birthdate.d == 99)
        {
            rep = 0;
            continue;
        }

        checkAge(student.birthdate, now);
    } while (rep);
}

void readDate(char label[], Date *date_pointer)
{
    printf("Informe a data ");
    if (label)
        printf(label);
    printf(" utilizando o formato dd/mm/yyyy: ");
    scanf("%d/%d/%d", &date_pointer->d, &date_pointer->m, &date_pointer->y);
}

void checkAge(Date birthdate, Date now)
{
    int age = getAge(birthdate, now);
    printf("O aluno tem %d anos portanto ele é ", age);
    age >= 18 ? printf("maior de 18 anos.") : printf("menor de 18 anos");
    printf("\n\n");
}

int getAge(Date birthdate, Date now)
{
    int age = now.y - birthdate.y;

    if (concatMonthAndDay(now) < concatMonthAndDay(birthdate))
        age--;

    return age;
}

int concatMonthAndDay(Date complete_Date)
{
    int month_and_day = complete_Date.m;

    month_and_day *= 100;
    month_and_day += complete_Date.d;

    return month_and_day;
}