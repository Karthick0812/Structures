//WAP to design the functions scan() and print() to scan and print the struct variable data.

#include<stdio.h>
struct st{
    int roll;
    char name[20];
    float marks;
};

void scan(struct st *);
void print(struct st);

int main()
{
    struct st s;
    scan(&s);
    print(s);
}
void scan(struct st *a)
{
    scanf("%d%s%f",&a->roll,a->name,&a->marks);
}
void print(struct st t)
{
    printf("%d %s %f",t.roll,t.name,t.marks);
}
