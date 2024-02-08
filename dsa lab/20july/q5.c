//5. Given an unsorted array of size n, WAP to find number of elements between two elements a and b
//(both inclusive).
#include <stdio.h>

int main()
{
    int size,a,b,indexa=-1,indexb=-1,fnda=0;
    printf("Enter Size of Array ");
    scanf("%d",&size);
    printf("Enter a ");
    scanf("%d",&a);
    printf("Enter b ");
    scanf("%d",&b);
    int arr[size];
    
    for(int i=0;i<size;i++){
        printf("Enter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }

   
   for(int i=0;i<size;i++){
        if (arr[i]==a&fnda==0){
            indexa=i;
            fnda=1;
        }
        if (arr[i]==b){
            indexb=i;
        }
    }
    
    if (indexa==-1 | indexb==-1){
        printf("Output 0");
    }
    else{
        printf("Output %d\n",(indexb-indexa)+1);
        for(int i=indexa;i<=indexb;i++){
            printf("%d ",arr[i]);
        }
    }

    return 0;
}