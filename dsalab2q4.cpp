#include<iostream>
#include<conio.h>
using namespace std;


int main(){
	int item,ind;
	
	int arr1[5]={1,2,5,4,3};
	for(int i=0;i<5;i++){
     	cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
	 }
	cout<<endl; 
	cout<<"Enter position where to delete"<<endl;
	cin>>ind;
	
	int n=5;
	int j=ind;
	while(j<n){
		
		
		arr1[j]=arr1[j+1];
		j++;
	}
	n=n-1;
	
	
	for(int i=0;i<n;i++){
     	cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
	 }
}
