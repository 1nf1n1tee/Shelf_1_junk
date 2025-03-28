#include <stdio.h>
#include <stdarg.h>

// Function to calculate the average 
void average(int num, ...){
    va_list list;
    va_start(list, num);
    int sum = 0;
    for(int i=0;i<num;i++){
        sum+=va_arg(list, int);
    }
    va_end(list);
    printf("%.2f",(float)sum/num);
}

int main() {
    
    // Call the variadic function | Don't Change this
    average(4, 85, 90, 78, 92);

    return 0;
}