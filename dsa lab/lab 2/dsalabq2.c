#include <stdio.h>

int main()
{   
   
    int num = 27;
    int flag,c=0;

    for(int i = 2;i<num;i++){
        if (num%i==0){
            printf("Not Prime");
            flag=1;
            c++;
            break;
        }
    }
    if (flag==1){
            c++;
            printf("Prime");
        }
    printf("\nCounter = %d",c);    
    return 0;
}