#include<iostream>
using namespace std;

void selection(int a[],int n){
	for(int i=0;i<n;i++){
		int min =i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]) min = j;
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
main(){
	int arr[4]={20,10,40,30};
	selection(arr,4);
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
}
