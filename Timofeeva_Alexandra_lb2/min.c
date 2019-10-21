#include “min.h”

int min(int arr[], int countel){
    int minimum=0,i;
    minimum=arr[0];
    for (i=1;i<countel;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    return minimum;
}
