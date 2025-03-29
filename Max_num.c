#include <stdio.h>

void findMax(int count, int numbers[]) {
    int max = numbers[0];
    
    for(int i=1;i<count;i++){
        if(numbers[i]>max){
            max = numbers[i];
        }
    }
    printf("%d",max);
}

int main() {
    // Don't Change this!
    int numbers[] = {3, 7, 20, 9, 5};
    // Here we Calculates the number of elements in the array using sizeof
    int count = sizeof(numbers) / sizeof(numbers[0]);
    // Call the function
    findMax(count, numbers);
    
    return 0;
}