#include <stdio.h>

void swap(char *a,char *b){
    char t = *a;
    *a=*b;
    *b=t;
}

int main(){
    char arr[] = "hello";
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    
    printf("Before reversing:\n");
    
    for(int i=0;arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < size/2; i ++) {
        swap(&arr[i], &arr[size-1-i]);
    }
    
    printf("After reversing:\n");
    
    for(int i=0;arr[i]!='\0';i++){
        printf("%c", arr[i]);
    }
    
    return 0;
}

