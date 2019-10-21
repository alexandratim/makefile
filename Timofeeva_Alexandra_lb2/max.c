#include “max.h”

int max(int arr[],int countel){
    int maximum=0,i;
    maximum=arr[0];
    for (i=1;i<countel;i++){
        if (arr[i]>maximum){
            maximum=arr[i];
        }
    }
    return maximum;
}
