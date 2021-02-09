#include<iostream>
#include<conio.h>
using namespace std;



/**Let an array named LA consist of 4 elements 2,4,6 & 8 . write down the code to
traverse(or print) all elements in the array.**/


int main(){
	
	int LA[4]={2,4,6,8};
	int n=(sizeof(LA)/sizeof(LA[1]));
	for(int i=0;i<n;i++){
		cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<LA[i]<<endl;
		
	}


/**
2. Use insertion algorithm to add an element (Give implementation)
i. 1 at index 0 ii. 5 at index 2 iii. 3 at index 4**/
int main(){
     int arr1[5]={9,48,7,14,85};
     int s=sizeof(arr1)/sizeof(arr1[1]);
     cout<<"Initially the array was"<<endl;
     for(int i=0;i<s;i++){
     	cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
	 }
     int elm1,elm2,elm3;
     cout<<"Element to enter at index 0"<<endl;
     cin>>elm1;
     cout<<"Element to enter at index 2"<<endl;
     cin>>elm2;
     cout<<"Element to enter at index 4"<<endl;
     cin>>elm3;
     
     
     arr1[0]=elm1;
     arr1[2]=elm2;
     arr1[4]=elm3;
     int z=sizeof(arr1)/sizeof(arr1[1]);
	 for(int i=0;i<z;i++){
		cout<<"The element present at\t"<<i<<"\tis"<<"\t"<<arr1[i]<<endl;
		
	}
     



	
	
}


