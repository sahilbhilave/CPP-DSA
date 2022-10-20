#include <bits/stdc++.h>

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
        a = new int[n];
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

    void reverse(Array &arr)
    {
        for (int i = 0; i < arr.length; i++)
        {
            a[i] = arr.a[(arr.length - 1) - i];
        }
        length = arr.length;
    }

    void display()
    {
        cout << "\n\n";
        for (int i = 0; i < length; i++)
        {
            cout << a[i] << " ";
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

    Array arr1;
    arr1.setSize(5);
    arr1.reverse(arr);
    arr1.display();
}