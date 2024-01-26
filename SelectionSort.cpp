#include <iostream>

using namespace std;


void selSort(int arr[], int l){
    for (int i = 0; i<l; i++){
        for (int j = i + 1; j<l; j++){
            if (arr[i]>arr[j]){
                swap<int>(arr[i], arr[j]);
            }
        }
    }
}

void out(int a[], int l){
    for (int i = 0; i<l; i++){
        cout<<a[i]<<'\t';
    }
}

int main()
{
    /* code */
    int spa[5] = {4, 3,1,23,5};
    selSort(spa, 5);

    out(spa, 5);

    return 0;
}
