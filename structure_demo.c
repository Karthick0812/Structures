/*
 * File: c-structs-demo.c
 * Author: Karthick S
 * Date: 11/08/2025
 * Description:
 *   A simple C program demonstrating the use of structures,
 *   specifically how to access structure members using both
 *   the dot (.) operator and the arrow (->) operator.
 *
 *   The program reads and prints student records (roll number,
 *   name, and marks) using two struct variables.
 *
 * Features:
 *   - Input/output of structure members using dot and arrow operators
 *   - Demonstrates accessing structure fields both directly and via address
 */

#include<stdio.h>
struct st{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct st v1,v2;
    
    scanf("%d %s %f",&v1.roll,v1.name,&v1.marks);//using dot operator to scan values for v1 at run time
    //scanf("%d %s %f",&(&v1)->roll,(&v1)->name,&(&v1)->marks);


    scanf("%d %s %f",&(&v2)->roll,(&v2)->name,&(&v2)->marks);//using arrow operator to scan values for v2 at run time

    printf("roll: %d name: %s marks: %f\n",v1.roll,v1.name,v1.marks);//using Dot operator to print the v1 structure element
    printf("roll: %d name: %s marks: %f",(&v2)->roll,(&v2)->name,(&v2)->marks);//using arrow operator to print the v2 structure element

}
