#include<iostream>
using namespace std;
void hashing(int arr[],int hashi,int s, int num)
{
    if(arr[hashi]==-1)
        arr[hashi]=num;
    else if(arr[hashi+1]<s-1)
        hashing(arr,hashi+1,s,num);
    else
        hashing(arr,0,s,num);
}
int c=0;
void searchnum(int arr[],int hashi,int n, int num)
{   c++;
    if(c<n)
{
    if(arr[hashi]==-1)
        cout<<"Element not present in array";\
    else if(arr[hashi]==num)
        cout<<"Element found";
    else if((hashi+1)<n-1)
        searchnum(arr,hashi+1,n,num);
    else
        searchnum(arr,0,n,num);
}
else
    cout<<"element not found;

}
c=0;
void deletion(int arr[],int hashi,int n, int num)
{
       c++;
    if(c<n)
{
    if(arr[hashi]==-1)
        cout<<"Element not present in array";\
    else if(arr[hashi]==num)
        arr[hashi]=-2;
    else if((hashi+1)<n-1)
        deletion(arr,hashi+1,n,num);
    else
        deletion(arr,0,n,num);
}
else
    cout<<"element not found;
}
int main()
{   cout<<"Enter the size of the array";
    cin>>a;
    int arr[a];
    cout<<"1.insert 2. delete 3. search \n";
    cin>>b;
    switch(b)
    {
    case 1:
        cout<<"Enter the no. to be enter";
        cin>>c;
        int d;
        d=c%10;
        hashing(arr,d,a,c);
    case 2:
        cout<<"Enter the no. to delete";

    }

}
