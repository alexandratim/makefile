#include <stdio.h>
#include ”min.h”
#include ”max.h”
#include ”sum.h”
#include ”diff.h”

int main(){
    int arr[100],i,j,number;
    char c;
    scanf("%d", &number);
    c=' ';
    i=0;
    while (c != '\n'){
        scanf("%d%c", &arr[i], &c);
        i++;
    }
    if(i>100){
        printf("%s\n","Данные некорректны");
        return 0;
    }
    switch(number){
        case 0:{
            printf("%d\n", max(arr, i ));
            break;
        }
        case 1:{
            printf("%d\n", min(arr, i ));
            break;
        }
        case 2:{
            printf("%d\n", diff(arr, i ));
            break;
        }
        case 3:{
            printf("%d\n", sum(arr, i ));
            break;
        }
        default:{
            printf("%s\n","Данные некорректны");
            break;
        }
    }
    return 0;
}
