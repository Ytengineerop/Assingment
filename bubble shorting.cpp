#include<iostream>
#define max 1000
using namespace std;
int main ()
{
   int a, j, x, arr[max], ele, size;
   cout<<"Enter the size of the arr:- ";
   cin>>size;
   for(a=0; a<size; a++)
   {
   	cout<<"Enter the element of the arr:- ";
   	cin>>arr[a];
   }
   cout <<"Entered element are:- \n";
   for(a=0; a<size; a++) {
      cout <<arr[a]<<"\t";
   }
cout<<endl;
for(a=0; a<size; a++) {
   for(j=a+1; j<size; j++)
   {
      while(arr[j] < arr[a]) {
         x = arr[a];
         arr[a] = arr[j];
         arr[j] = x;
      }
   }
}
cout <<"after shorting the element:- \n";
for(a=0; a<size; a++){
   cout <<arr[a]<<"\t";
}
}
