#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}node;
void display(node *top)
{
  node *t = top;
  while(t!=NULL)
  {
    printf("%d ", t->data);
    t = t->next;
  }
  printf("\n");
}
node* reverse(node *top, node *rtop)
{
  node *t;
  while(top!=NULL)
  {
    t = (node*)malloc(sizeof(node));
    t->next = rtop;
    rtop = t;
    t->data = top->data;
    top = top->next;
  }
  return rtop;
}
void main()
{
  node *top = NULL, *rtop = NULL;
  int i,n;
  printf("Enter stack size : ");
    scanf("%d", &n);
  printf("Enter %d elements :\n", n);
  for(i=1; i<=n; i++)
  {
    node *newnode = (node*)malloc(sizeof(node));
    newnode->next = top;
    top = newnode;
    scanf("%d", &newnode->data);
  }
  printf("\nOriginal stack : ");
  display(top);
  rtop = reverse(top, rtop);
  printf("\nReversed stack : ");
  display(rtop);
}
