/*Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, display their information, 
and find the average of total marks.
*/

#include<stdio.h>

struct Student{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student v[2];
    
    printf("Enter the two student details: name,age,marks\n");
    for(int i=0;i<2;i++)
    scanf("%s%d%f",v[i].name,&v[i].age,&v[i].marks);
   
    printf("The two student details:\n");
    for(int i=0;i<2;i++)
    printf("Name %d:%s\nAge:%d\nMarks:%f\n",i+1,v[i].name,v[i].age,v[i].marks);
    
    //float c;
    //float a=v[0].total_marks;
   // float b=v[1].total_marks;
    
   // c=(a+b)/2;
    printf("The average of two students is %f\n",((v[0].marks+v[1].marks)/2));
    
    
}
