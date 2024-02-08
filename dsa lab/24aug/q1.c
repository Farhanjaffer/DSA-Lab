//q1
#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct node {
    int info;
    struct node* link;
};
struct node* start = NULL;

// Function to traverse the linked list
void traverse()
{
    struct node* temp;
  
    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");
  
    // Else print the LL
    else {
        temp = start;
        while (temp != NULL) {
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}
  
  // Function to insert at the front
// of the linked list
void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->info = data;
  
    // Pointer of temp will be
    // assigned to start
    temp->link = start;
    start = temp;
}
// Function to delete from the front
// of the linked list
void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->link;
        free(temp);
    }
}
// Function to delete from any specified
// position from the linked list
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
  
    // If LL is empty
    if (start == NULL)
        printf("\nList is empty\n");
  
    // Otherwise
    else {
        printf("\nEnter index : ");
  
        // Position to be deleted
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
  
        // Traverse till position
        while (i < pos - 1) {
            temp = temp->link;
            i++;
        }
  
        // Change Links
        position = temp->link;
        temp->link = position->link;
  
        // Free memory
        free(position);
    }
}
// Function to find the maximum element
// in the linked list
void maximum()
{
    int a[10];
    int i;
    struct node* temp;
  
    // If LL is empty
    if (start == NULL){
        printf("\nList is empty\n");
    }
    // Otherwise
    else {
        temp = start;
        int max = temp->info;
   
        // Traverse LL and update the
        // maximum element
        while (temp != NULL) {
  
            // Update the maximum
            // element
            if (max < temp->info)
                max = temp->info;
            temp = temp->link;
        }
        printf("\nMaximum number "
               "is : %d ",
               max);
    }
}
int main()
{
    int choice;
    while (1) {
  
        printf("\n\t1  To see list\n");
        printf("\t2  For insertion at"
               " starting\n");
        
        
        printf("\t3  For deletion of "
               "first element\n");
        
        printf("\t4  For deletion of "
               "element at any position\n");
        printf("\t5 To find maximum among"
               " the elements\n");
       
        printf("\t6 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
  
        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
      
        case 3:
            deleteFirst();
            break;
        
        case 4:
            deletePosition();
            break;
        case 5:
            maximum();
            break;  
    
        case 6:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
