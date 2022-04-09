#include<iostream>
using namespace std;
int ele(int arr[], int element, int size);

int x(int s)
{
	cout<<endl<<endl<<s;
}
int main()
{
	int element, arr[100], size, a, b, c;
	cout<<"Enter the the size of arr:- ";
	cin>>size;
	cout<<"Enter the element of the arr- ";
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
	}
	cout<<"Enter the scearching element:- ";
	cin>>element;
	b = ele(arr, element, size);
	if(b==1)
	{
		cout<<"founded";
	}
	else
	{
		cout<<"Not founded";
	}
}
int ele(int arr[], int element, int size)
{
	while(1)
	{
			if(arr[(size+1)/2]==element)
			{
				x(size/2);
				return 1;
				break;
			}
		if(arr[size/2]>element)
		{
			size=size/2;
		}
	}
}
