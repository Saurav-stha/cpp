#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	int i,j,key;
	for (i=1;i<n;i++){
		key = arr[i];
		j=i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void disp(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	int arr[6]={30,20,50,10,60,40};
	int N = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,N);
	disp(arr,N);
}
