#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50
#define MAX_STUDENT 100

typedef struct {
   int day;
   int month;
   int year;
} birthday;

typedef struct {
   char name[MAX_NAME];
   int score;
   birthday std_bd;
} student;

void addStudent(student s1[],int count);
void printStudent(student s1[],int count);
float averageStudentScore(student s1[],int count);
void printaverageStudentScore(float avg);

int main()
{
    int n;
    float avg;
    student s[MAX_STUDENT];
    scanf("%d",&n);
    addStudent(s,n);
    printStudent(s,n);
    avg = averageStudentScore(s,n);
    printaverageStudentScore(avg);
    exit(EXIT_SUCCESS);
}
void addStudent(student s1[],int count){
    int i;
    for(i=0;i<count;i++){
        scanf("%s",s1[i].name);
        scanf("%d",&s1[i].score);
        scanf("%d/%d/%d",&s1[i].std_bd.day,&s1[i].std_bd.month,&s1[i].std_bd.year);
    }
}
void printStudent(student s1[],int count){
    int i;
    for(i=0;i<count;i++){
        printf("Name: %s\n",s1[i].name);
        printf("Score: %d\n",s1[i].score);
        printf("Birthday: %d/%d/%d\n",s1[i].std_bd.day,s1[i].std_bd.month,s1[i].std_bd.year);
    }
}
float averageStudentScore(student s1[],int count){
    int i;
    float sum = 0.0;
    for(i=0;i<count;i++){
        sum += s1[i].score;
    }
    return sum/count;
}
void printaverageStudentScore(float avg){
    printf("Average student score: %.2f\n",avg);
}
