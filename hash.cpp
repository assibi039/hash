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
    cout<<"element not found";

}
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
    cout<<"element not found";
}
int main()
{   int a,b,c,d;
    cout<<"Enter the size of the array";
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        arr[i]=-1;
    while(1)
        {
            cout<<"1.insert 2. delete 3. search \n";
            cin>>b;
            /*cout<<"Enter the number \n";
            cin>>c;
            d=c%a;*/
            switch(b)
            {
            case 1:
                cout<<"Enter the number \n";
                cin>>c;
                d=c%a;
                hashing(arr,d,a,c);
                break;
            case 2:
                cout<<"Enter the number \n";
                cin>>c;
                d=c%a;
                deletion(arr,d,a,c);
                break;
            case 3:
                cout<<"Enter the number \n";
                cin>>c;
                d=c%a;
                searchnum(arr,d,a,c);
                break;
            case 4:
                for(int i=0;i<a;i++)
                    cout<<arr[i]<<"\n";
                break;
            default :
                return 0;
                break;
            }
        }

}
