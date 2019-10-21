#include “diff.h”

int diff(int arr[],int countel){
    int maximm=max(arr, countel);
    int minimm=min(arr, countel);
    int difference=maximm-minimm;
    return difference;
}
