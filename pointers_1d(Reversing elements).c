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
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Before reversing:\n");
    
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < size/2; i ++) {
        swap(&arr[i], &arr[size-1-i]);
    }
    
    printf("After reversing:\n");
    
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}

