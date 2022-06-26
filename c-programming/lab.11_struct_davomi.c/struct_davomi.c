#include <stdio.h>
#include <string.h>

typedef struct 
{
    int ID;
    char name[21];
    char birthdate[9];
}*STP, Student;

void readStudents(STP students, int count)
{
    for(int i = 0; i < count; i++)
    {
        scanf(" %d %d %s", &students[i].ID, (students + i)->name, students[i].birthdate);
    }

void printStudents(STP students, int count)
{
    for(int i = 0; i < count; i++)
    
}

int main()
{
    Student students[100];
    int n;

    scanf(" %d", &n);

    readStudents(students, n);
    printStudents(students, n);
    return 0;
}