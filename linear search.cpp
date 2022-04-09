#include <iostream>
#define max 1000
using namespace std;
int main() 
{
	int arr[max],a,b,c,size,val;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=1; a<=size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
	}
	cout<<"Enter the find falue:- ";
	cin>>val;
	for(a=1; a<=size; a++)
	{
		if(arr[a]==val)
		{
			break;
		}
	}
	if(arr[a]==val){
	cout<<"finded value at:- "<<a;}
	else
	{
		cout<<"Envalid value entered";
	}
}
