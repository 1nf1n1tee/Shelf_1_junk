#include <stdio.h>

void main(){
    char arr[] = "Mahin";
    
    int i,count;
    i=0;
    count=0;
    int flag = 0;
    
    while(1==1){
        if(arr[i]!='\0' && flag ==0){
            printf("%c",arr[i]);
            i++;
            count++;
        }
        else if(flag == 0){
            printf("\nLength of the string is %d\n",count);
            flag =1;
            i=0;
        }
        else if(flag==1 && i<count/2){
            char temp;
            temp = arr[i];
            arr[i] = arr[count-1-i];
            arr[count-1-i] = temp;
            i++;
        }
        else if(flag==1 && i>=count/2){
            printf("Revered string: ");
            for(int j=0;j<count;j++){
                printf("%c",arr[j]);
            flag =2;
        }
        }
        else if(flag==2){
            break;
        }
        }
    }
