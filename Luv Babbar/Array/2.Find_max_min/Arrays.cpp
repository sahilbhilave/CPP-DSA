#include<bits/stdc++.h>

using namespace std;
class Array 
{
    int *a;
    int size;
    int length;

    public:
    Array()
    {
        size = 0;
        length = 0;
    }
    void setSize(int n)
    {
        size = n;
        a = new int [n];
    }

    void append(int n)
    {
        if (length > size)
        {
            cout << "Not enough Size of Array!!";
        }
        else
        {
            a[length] = n;
            length++;
        }
    }

    int max()
    {
        int m=0;
        for(int i=0;i<length;i++)
        {
            if(m<a[i])
            {
                m = a[i];
            }
        }
        return m;
    }

    int min()
    {
        int m=a[0];
        for(int i=0;i<length;i++)
        {
            if(m>a[i])
            {
                m = a[i];
            }
        }
        return m;
    }

    void display()
    {
        cout<<"\n\n";
        for(int i=0;i<length;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};

int main()
{
    Array arr;
    arr.setSize(5);
    arr.append(10);
    arr.append(7);
    arr.append(2);
    arr.append(6);
    arr.append(12);
    arr.display();

    cout<<"\nMax : "<<arr.max();
    cout<<"\nMin : "<<arr.min();

}