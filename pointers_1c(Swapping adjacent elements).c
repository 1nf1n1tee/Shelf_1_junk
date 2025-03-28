#include <stdio.h>

void swap(int *a,int *b){
    //printf("Before swapping: a = %d, b = %d\n",*a, *b);
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    //printf("After swapping: a = %d, b = %d\n",*a, *b);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<12;i++){
        printf("%d ",arr[i%6]);
        if(i>0 && i%2!=0 && i<6){
            swap(&arr[i],&arr[i-1]);
        }
        if(i==5){
            printf("\nAfter swapping \n");
        }
        }
    
    return 0;
}

