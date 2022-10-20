#include<bits/stdc++.h>

using namespace std;

struct Array
{
    int *a;
    int size;
    int length;
};


void input(struct Array &arr)
{
    int n;
    cout<<"Enter number of inputs : ";
    cin>>n;
    if(n>arr.size)
    {
        cout<<"Array Size is only "<<arr.size<<"!!";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter Element "<<(i+1)<<" : ";
            cin>>arr.a[i];
        }
        arr.length = n;
    }
}

void display(struct Array &arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    struct Array arr;
    cout<<"Enter Size : ";
    cin>>arr.size;
    arr.a = new int [arr.size];
    arr.length = 0;    

    input(arr);
    display(arr);
}

/*
Array memory is allocated during runtime in the Heap section
The size of the array is dynamic
Size is the total size of the memory allocated to the array
Length is the total elements present in the array
*/