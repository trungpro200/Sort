#include <iostream>
#include <stdlib.h>

using namespace std;


void quickSort(int arr[], int left, int right){
    if (left>=right){
        return;
    }
    printf("%u, %u\n", left, right);
    int pivotIndex = right; //dùng phần tử cuối làm chốt (cho tiện ._.)

    //Partition
    int i = left-1; //tạm thời
    for (int j = left; j<right; j++){
        if (arr[j]<arr[pivotIndex]){
            i++;
            if (j>i){
                swap<int>(arr[j], arr[i]);
            }
        }
    }
    swap<int>(arr[i+1], arr[pivotIndex]);

    quickSort(arr, left, i);
    quickSort(arr, i+2, right-1);
}

void out(int a[], int l){
    for (int i = 0; i<l; i++){
        cout<<a[i]<<'\t';
    }
}

int main()
{
    /* code */
    int a[9] = {26,6,2,5,74,12,32,54,23};
    quickSort(a, 0, 8);
    out(a, 9);
    return 0;
}
