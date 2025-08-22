//Dynamic memory allocation for structure

#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[20];
    float marks;
};
int main()
{
  struct student *s=(struct student *)malloc(sizeof(struct student));
  
    scanf("%d%s%f",&s->roll,s->name,&s->marks);
    
    printf("%d %s %f\n",(*s).roll,(*s).name,(*s).marks);
}
