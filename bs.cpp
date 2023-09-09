#include<iostream>
using namespace std;

void binarySearch(int arr[],int low,int high,int key){
	int mid = low + (high-low)/2;
	if (high>=low){
		if(key==arr[mid]){
			cout<<"Found in index "<<mid<<endl;
		}
		else if(key>arr[mid]){
			binarySearch(arr,mid+1,high,key);
		}
		else if(key<arr[mid]){
			binarySearch(arr,low,mid-1,key);
		}
	}else{
		cout<<"Not found!!"<<endl;
	}
}
int main(){
	int array[100];int i=0;int j=1;
	for (i,j;i<100;i++,j++){
		if(j%2==0){
			array[i]=j;
		}else{
			i--;
		}
	}
//	for(i=0;i<100;i++){
//		cout<<array[i]<<"\t";
//	}
	int key;
	int choice;
	while(true){
		cout<<"Enter 1 for searching and 2 to quit.. ";cin>>choice;
		switch(choice){
			case 1:
				cout<<"enter key: ";cin>>key;
				binarySearch(array,0,99,key);
				break;
			case 2:
				return false;
			default:
				cout<<"Enter valid number...."<<endl<<endl;
		}
//		return 0;
	}
}
