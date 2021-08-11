#include<iostream> //Linear search
using namespace std;
void lsearch(int a[],int n,int key)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element found at : "<<i+1;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found";
	}
}
int main()
{
	int a[10],n,i,key;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>key;
	lsearch(a,n,key);
}

