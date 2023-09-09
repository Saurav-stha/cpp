#include<iostream>
using namespace std;

void insertion(int a[],int n){
	for (int i=0;i<n;i++){
		cout<<endl<<endl;
		int temp = a[i];cout<<"in temp "<<a[i]<<endl;
		int j=i-1;cout<<"int j: "<<j<<endl;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];cout<<a[j+1]<<"  "<<a[j]<<endl;
			j=j-1;cout<<j<<endl<<endl;
		}
		a[j+1]=temp;cout<<a[j+1]<<"  "<<temp<<endl<<endl;
		cout<<"\nthe list is: ";
		for(int k=0;k<4;k++){
		cout<<a[k]<<" ";
	}
	}
}
main(){
	int arr[4]={20,10,40,30};
	insertion(arr,4);
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
}
