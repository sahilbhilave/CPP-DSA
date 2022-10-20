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

    int kthmax(int k)
    {
        int temp,pos;
        int max=0;
        for(int i=0;i<k;i++)
        {
            pos=0;
            max=0;
            for(int j=i;j<length;j++)
            {
                if(max<a[j])
                {
                    max = a[j];
                    pos = j;
                }
            }
            temp = a[i];
            a[i] = max;
            a[pos] = temp;
        }

        return a[k-1];
    }

    int kthmin(int k)
    {
        int temp,pos;
        int min=a[0];
        for(int i=0;i<k;i++)
        {
            pos=0;
            min=a[i];
            for(int j=i;j<length;j++)
            {
                if(min>a[j])
                {
                    min = a[j];
                    pos = j;
                }
            }
            temp = a[i];
            a[i] = min;
            a[pos] = temp;
        }

        return a[k-1];
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
    cout<<"\n"<<arr.kthmax(3);
    cout<<"\n"<<arr.kthmin(4);

}