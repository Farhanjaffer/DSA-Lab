//  Write a menu driven program to perform the following operations of a stack using linked list by using suitable user defined functions for each case. a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop

#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int data;
    struct Stack *next;
} *top = NULL;
 
void check()
{
    if (top == NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Stack is not Empty.\n");
    }
}

void push()
{
    int data;
    struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
    printf("Enter Data to Push onto Stack : ");
    scanf("%d", &newNode->data);

    if (top == NULL)
    {
        top = newNode;
        top->next = NULL;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        struct Stack *temp;
        printf("%d popped from Stack.\n", top->data);
        temp = top;
        top = top->next;
        free(temp);
    }
}



void show_Stack()
{
    if (top == NULL)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        struct Stack *temp = top;
        printf("\nData in Stack are :\n");
        while (temp->next != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n** Operations On Stack **\n");
        printf("      1. Check Stack\n      2. Push\n      3. Pop\n   4. Show Stack\n      5. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            check();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
      
        case 4:
            show_Stack();
            break;
        case 5:
            printf("Thank You. Have a Good Day.\n");
            exit(0);
            break;

        default:
            printf("Invalid Choice. Please try Again.\n");
            break;
        }

    } while (choice);

    return 0;
}