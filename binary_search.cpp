#include<iostream>
using namespace std;
int main()
{
    int i,cust_id[5],size=5,searchkey,l=0,h=size-1,mid;
    bool found=false;
    cout<<"enter elements of array";
    for(i=0;i<size;i++)
    {
    cin>>cust_id[i];
}
cout<<"\n Enter search key";
cin>>searchkey;
while(l<=h)
{
    mid=(l+h)/2;
    if(searchkey==cust_id[mid])
    {
        cout<<"Search element found at"<<mid<<endl;
        found=true;
        break;
    }
    else if(searchkey>=cust_id[mid])
    {     
        l=mid+1;
    }
    else 
    {
        h=mid-1;
    }
}
if(found!=true)
 {
    cout<<"Search element not found";
}
return 0;
}
