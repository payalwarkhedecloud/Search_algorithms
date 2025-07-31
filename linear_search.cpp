#include<iostream>
using namespace std;
int main()
{
    int i,searchkey,array[5],size;
    cout<<"Enter size of array";
    cin>>size;
    cout<<"Enter elements of array";
    for(i=0;i<size;i++)
    {
    cin>>array[i];
    }
    cout<<"Enter search key";
    cin>>searchkey;
    for(i=0;i<size;i++)
    {
        if(array[i]==searchkey)
        {
            cout<<"Search key found at:"<<i;
            return i;
        }
    }
    //if not found in the loop then display search key not found
    cout<<"Search not found!";
    return 0;
}