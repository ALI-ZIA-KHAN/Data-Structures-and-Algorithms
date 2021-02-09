#include<iostream>
#include<conio.h>
using namespace std;

int main(){

struct node{
	
	int data;
	node* next;
	
	
};

struct node* head,*newnode,*temp;
head=0;
int choice=1,count;
while(choice!=0){
		
	newnode=new node();
	cout<<"Enter data for node"<<endl;
	cin>>newnode->data;
	newnode->next=0; 
		
	if(head==0){
		
		head=temp=newnode;
	}	
	else{
		
	 temp->next=newnode;
	 temp=newnode;	
	}	
	cout<<"Do u want to continue"<<endl;
	cin>>choice;		
	}
		
	temp=head;
	while(temp!=0){
		
		
		cout<<" "<<temp->data;
		temp=temp->next;
		count++;
	}
			
	return 0;

}
