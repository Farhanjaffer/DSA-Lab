// using array
#include <stdio.h>
#include <stdlib.h>
#define size 7
int arr[size];
int top = -1;
 
void check_Stack()
{
    if (top == -1)
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
    if (top == size - 1)
    {
        printf("Stack is FULL. Can't Push\n");
    }
    else
    {
        printf("Enter data to push onto Stack : ");
        scanf("%d", &data);
        top++;
        arr[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty. Can't pop.\n");
    }
    else
    {
        printf("\n%d popped from stack.\n", arr[top]);
        top--;
    }
}


void show()
{
    if (top == -1)
    {
        printf("Stack is Empty.\n");
    }
    else
    {
        printf("Data in Stack are :\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
}

int main()
{
   
 int choice;
    do
    {
        printf("\n*** Operations On Stack ***\n");
        printf("      1. Check Stack\n      2. Push\n      3. Pop\n   4. Show Stack\n      5. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            check_Stack();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
      
        case 4:
            show();
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