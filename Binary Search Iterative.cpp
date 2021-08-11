#include<iostream> // Binary Search using iteration
using namespace std;
int bsearch(int ar[],int m,int key)
{
	int beg=0,end=m-1,mid,flag=0;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(ar[mid]==key)
		{
			cout<<"Element found at : "<<mid+1;
			flag=1;
			break;
		}
		if(ar[mid]<key)
		{
			beg=mid+1;
		}
		if(ar[mid]>key)
		{
			end=mid-1;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found";
	}
}
int main()
{
	int flag=0,key,i,n,a[10],beg,mid,end;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the elements in the array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>key;
	bsearch(a,n,key);	
}

