#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack *next;
}*top=NULL;

void insert(struct stack **s,int num){
    struct stack *temp;
 temp=(struct stack*)malloc(sizeof(struct stack));
 temp->data=num;
 temp->next=*s;
 *s=temp;
}
void isempty(){
    if (top==NULL){
        printf("\nThe stack is empty");
    }
    else
    printf("\nThe stack is not empty");
}
void display(struct stack *s)
{
printf("List items\n");
    while (s)
    {
        printf(" %d", s->data);
        s = s->next;
    }
}
void push(int m){
struct stack *temp;
temp=(struct stack* )malloc(sizeof(struct stack));
temp->data=m;
temp->next=NULL;
temp->next=top;
top=temp;
}
void pop(){
    struct stack *temp;
     if (top==NULL)
    {   printf("\nThe stack is empty");}
    temp=top;
    printf("\nThe poped out element is %d",temp->data);
    top=top->next;
    free(temp);
    }
int main(){
int size,n,ch,data;

printf("Enter the size of node");
scanf("%d",&size);
printf("\nEnter the elements in the stack :");
for (int i = 0; i < size; i++)
{    
    scanf("%d",&data);
    insert(&top,data);
}
printf("\nPress 1 to check for empty");
printf("\nPress 2 to display");
printf("\nPress 3 to push");
printf("\nPress 4 to pop");
printf("\nPress 5 to exit");
while(1){printf("\nEnter the choice to see the output : ");
scanf("%d",&ch);
switch (ch)
{
case 1:
    isempty();
    break;
case 2:
 display(top);
 break;
 case 3:
 printf("\nEnter the number to be pushed:");
 scanf("%d",&n);
 push(n);
 display(top);
 break;
 case 4:
 pop();
 display(top);
 break;
 case 5:
printf("Exiting program...\n");
exit(0);
break;
default:
printf("\nInvalid input");
    break;
}

}
return 0;
}