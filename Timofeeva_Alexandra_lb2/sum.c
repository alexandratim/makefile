#include “sum.h”

int sum(int arr[],int countel){
    int i,summ,im;
    summ=0;
    im = min(arr, countel);
    for (i=0;i<countel;i++){
        if (arr[i] == im){
            break;
        }
        summ += arr[i];
    }
    return sum;
}
