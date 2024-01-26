#include<iostream>
#include<cmath>

using namespace std;

int binSearch(int arr[], int l, int key){
	int dau = 0;
	int cuoi = l- 1;
	int giua = floor((dau+cuoi)/2);
	
	while (dau <= cuoi){
//		printf("%u - %u - %u\n", dau, giua, cuoi); // for debugging
		if (arr[giua] == key){
			cout<<"Key found at index: "<<giua<<'\n';
			return giua;
		}
		else if (key > arr[giua]){
			dau = giua+1;
		} else if (key < arr[giua]){
			cuoi = giua-1;
		}
		giua = floor((dau+cuoi)/2); //Bruh
	}
	cout<<"Key not found.";
	return -1;
}

int main(){
	int a[6] = {2,3,5,7,9,10};
	cout<<binSearch(a, 6,10);
}