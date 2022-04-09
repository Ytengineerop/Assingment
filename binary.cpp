#include<iostream>
#define MAX_SIZE 1000
using namespace std;
int main()
{
	int arr[MAX_SIZE];
	int a,b,c,size,pos,element;
	
	cout<<"Entered the size of the arr:- ";
	cin>>size;
	for(b=1; b<=size; b++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[b];
	}
	cout<<"Enter the find element of the arr:- ";
	cin>>element;
	for(b=1; b<=size; b++)
	{
	if(arr[b]/2<element)
	{
		if(arr[b]==element)
		{
			cout<<"position is:- "<<b;
		}
	}
	if(arr[b]/2>element)
	{
		if(arr[b]==element)
		{
			cout<<"position is:- "<<b;
		}	
	}
	}
	
}
