#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	
	int item,ind;
	
	int arr1[4]={2,4,6,8};
	for(int i=0;i<4;i++){
     	cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
	 }
	cout<<endl; 
	cout<<"Enter item to insert"<<endl;
	cin>>item;
	cout<<"Enter position where to enter"<<endl;
	cin>>ind;
	
	int n=4;
	int j=n-1;
	
	while(j>=ind){
		
		arr1[j+1]=arr1[j];
		j--;
	}
	arr1[ind]=item;
	n=n+1;
	
	
	
	
	for(int i=0;i<n;i++){
     	cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
	 }
	 
	 return 0;
}
