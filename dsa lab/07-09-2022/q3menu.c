#include <stdio.h>
#include <stdlib.h>

struct doublenode
{
    struct doublenode *prev;
    int data;
    struct doublenode *next;
};

void traverse(struct doublenode *p){
   while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
}
};

void count(struct doublenode *p){
    int c=0;
   while(p!=NULL){
    printf("%d ",p->data);
    c++;
    p=p->next;
}printf("\nTotal Count = %d\n",c);
};

struct doublenode* reverse(struct doublenode *p){
    struct doublenode *temp;
    struct doublenode *start;
    while(p->next!=NULL){
    p=p->next;
    start=p;
   }
   while(p!=NULL){
   temp=p->next;
   p->next=p->prev;
   p->prev=temp;
   p=p->next;
   }
   return start;
}
void isempty(struct doublenode *p){
   if (p==NULL){
    printf("\nList is NULL");
   }
   else{
    printf("\nList is not NULL");
   }
};

void delete(struct doublenode *p,int index){
   int count=0; 
   while(count!=index){
    p=p->next;
    count++;
   }
   struct doublenode *temp;
   temp=p->prev;
   temp->next=p->next;
   p->next->prev=temp;
   free(p);
};

void deletekey(struct doublenode *p,int key){
    int count =0;
    while(p->next->data!=key){
    p=p->next;
    count++;
    }
    p->next=p->next->next;
};

void insert(struct doublenode *p,int index,int d){
   int count=0; 
   while(count!=index-1){
    p=p->next;
    count++;
   }
   struct doublenode *newnode;
   newnode = malloc(sizeof(struct doublenode));
   newnode->data=d;
   struct doublenode *temp;
   
   temp=p->next;
   p->next=newnode;
   newnode->prev=p;

   newnode->next=temp;
   temp->prev=newnode;
};

void insertbegin(struct doublenode **p,int d){
    struct doublenode *newnode=NULL;
    newnode = malloc(sizeof(struct doublenode));
    newnode->data=d;
    newnode->next=(*p);
    (*p)=newnode;
};

void search(struct doublenode *p,int key){
    int count =0;
    while(p->data!=key){
    p=p->next;
    count++;
    }
    printf("\nFound it %d \n",p->data);
};


int main()
{
    
struct doublenode *head;
struct doublenode *one = NULL;
struct doublenode *two = NULL;
struct doublenode *three = NULL;

one = malloc(sizeof(struct doublenode));
two = malloc(sizeof(struct doublenode));
three = malloc(sizeof(struct doublenode));

one->data=1;
two->data=2;
three->data=3;

one->prev=NULL;
one->next = two;
two->prev=one;

two->next = three;
three->prev=two;

three->next=NULL;

head=one;
int end =0;
int opt;
while(end!=1){
    printf("\n1 Traverse ");
    printf("\n2 Reverse ");
    printf("\n3 Empty ");
    printf("\n4 Insert ");
    printf("\n5 Insert Begin");
    printf("\n6 Delete at any position ");
    printf("\n7 Delete at data ");
    printf("\n8 Search Elements ");
    printf("\n9 Count Nodes ");
    printf("\n10 Exit ");
    
    
    printf("\n8 Exit ");
    printf("\nEnter your Choice");
    scanf(" %d",&opt);
    printf("\n");
    if(opt==1){
        traverse(head);
    }
    else if(opt==2){
        struct doublenode *rv;
        rv=reverse(head);
        traverse(rv);
    }
    else if(opt==3){
        isempty(head);
    }
    else if(opt==4){
        int a;int b;
        printf("Enter Values ");
        scanf("\n%d %d\n",&a,&b);
        insert(head,a,b);
    }
    else if(opt==5){
        int i;
        printf("Enter Values ");
        scanf("\n%d \n",&i);
        insertbegin(&head,i);
    }
    else if(opt==6){
        int i;
        printf("Enter Values");
        scanf("\n%d \n",&i);
        delete(head,i);
    }
    else if(opt==7){
        int i;
        printf("Enter Values");
        scanf("\n%d \n",&i);
        deletekey(head,i);
    }
    else if(opt==8){
        int i;
        printf("Enter Values");
        scanf("\n%d \n",&i);
        search(head,i);
    }
   
    else if(opt==9){
       count(head);
    }

    else if(opt==10){
        return 0;
    }

    else{
       printf("I dont know");
    }printf("\n");
}

return 0;
}