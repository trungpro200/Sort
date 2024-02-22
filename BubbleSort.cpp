#include <iostream>

using namespace std;

void out(int a[], int l){
    for (int i = 0; i<l; i++){
        cout<<a[i]<<'\t';
    }
}

void bubbleSort(int arr[], int l){
    
    bool sorted = false;
    
    while (!sorted)
    {
        sorted = true;
        for (int i = 1; i<l; i++){
            if (arr[i-1]>arr[i]){
                sorted = false;
                swap<int>(arr[i], arr[i-1]);
            }
        }
    }
}


int main(){
    int a[9] = {26,6,2,5,74,12,32,54,23};
    bubbleSort(a, 9);
    out(a, 9);
    return 0;
}