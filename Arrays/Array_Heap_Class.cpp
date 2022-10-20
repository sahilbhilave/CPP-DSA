#include <bits/stdc++.h>

using namespace std;

class Array
{
private:
    int *a;
    int size;
    int length;

public:
    Array()
    {
        size = 0;
        length = 0;
    }

    void setSize()
    {
        cout<<"Enter Size of Array : ";
        cin>>size;
        a = new int [size];
    }

    void input()
    {
        int n;
        cout << "Enter number of inputs : ";
        cin >> n;
        if (n > size)
        {
            cout << "Array Size is only " << size << "!!";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << "Enter Element " << (i + 1) << " : ";
                cin >> a[i];
            }
            length = n;
        }
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Array a;
    a.setSize();
    a.input();
    a.display();
}