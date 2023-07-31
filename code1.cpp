#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no. of elements into the array:";
	cin>>n;
	int a[n],b[n];
	int i;
	cout<<"Enter elements into the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num,temp;
	cout<<"Enter till what elements you want to swap:";
	cin>>num;temp=a[num-1];
	for(i=num-2;i>=0;i--)
	{
		a[i+1]=a[i];
	}a[0]=temp;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
