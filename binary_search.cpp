#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], size, a, b, c, cond=0, find;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
	}
	cout<<"Enter the find element:- ";
	cin>>find;
	if(size%2==0)
	{
		b=size/2;
	}
	else
	{
		b=(size+1)/2;
	}
	if(arr[b]>find)
	{
		for(a=b; a>=0; a--)
		{
			if(arr[a]==find)
			{
				cout<<"Element is founded:- "<<arr[a];
				cond=1;
			}
		}
	}
	else
	{
		for(a=b; a<=size; a++)
		{
			if(arr[a]==find)
			{
			cout<<"Element is founded:- "<<arr[a];
			cond=1;
			}
		}
	}
	if(cond==0)
	{
		cout<<"Element is not founded..... ";
	}
}
