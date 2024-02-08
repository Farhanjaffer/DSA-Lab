#include <stdio.h>

int main()
{   
    int size;
    printf("Enter Size of Array ");
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++){
        printf("\nEnter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int c1=0;
    int even[size],e=0;
    int odd[size],o=0;

    
    for(int i=0;i<size;i++){
        if (arr[i]%2==0){
            even[e]=arr[i];
            e++;
            c1++;
        }
        else{
            odd[o]=arr[i];
            o++;
            c1++;
        }
    }
    

    for(int i=0;i<e;i++){
        arr[i]=even[i];
        c1++; 
    }
    for(int i=0;i<o;i++){
        arr[e]=odd[i];
        e++;
        c1++;
    }

    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\nCounter = %d",c1);

    return 0;
}