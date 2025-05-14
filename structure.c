#include <stdio.h>
#include <string.h>


struct student{
  int Sno;
  char name[10];
  int year;
  char sec;
  float marks;
};

int main(void){

    int a[5], i, sum = 0;
    float avg;


    struct student s2;

    printf("Enter the data of the student:\nroll number: ");
    scanf(" %d", &s2.Sno);
    printf("Name: ");
    scanf(" %s", s2.name);
    printf("Year: ");
    scanf(" %d", &s2.year);
    printf("Section: ");
    scanf(" %c", &s2.sec);
    printf("Enter avg marks of 5 subjects\n");
    scanf(" %f", &s2.marks);

    printf("*****StudentID*****\n");
    printf("S.no: %d\nname: %s\nyear: %d\nsec: %c\nAverage marks: %.2f", s2.Sno, s2.name, s2.year, s2.sec, s2.marks);



}
