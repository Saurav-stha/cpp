#include<iostream>
using namespace std;

void bubble(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		cout<<endl<<endl;
		for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    	}
    	cout<<"\nlist is";
    		for(int i=0;i<4;i++){
		cout<<arr[i]<<"\t";
	}
	}
}
main(){
	int arr[4]={2,44,22,11};
	bubble(arr,4);
	for(int i=0;i<4;i++){
		cout<<arr[i]<<"\t";
	}
}
