#include<iostream> // Binary Search USING  recurrsion 
using namespace std;
int binary_search(int ar[],int b,int e,int k)
{
	int mid;
	int beg=b;
	int end=e;
	if(beg<=end)
	{
		mid=(beg+end)/2;
		if(ar[mid]==k)
		{
			return mid;
		}
		if(ar[mid]<k)
		{
			return binary_search(ar,mid+1,e,k);
		}
		if(ar[mid]>k)
		{
			return binary_search(ar,b,mid-1,k);
		}
	}
	else
	{
		return -1;	
	}
}
int main()
{
	int key,i,n,a[10],p;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the elements in the array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : ";
	cin>>key;
	p=binary_search(a,0,n-1,key);
	if(p==-1)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"Element found at : "<<p+1;
	}
}

