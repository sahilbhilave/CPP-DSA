#include<bits/stdc++.h>

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

    /* Set the size of the array (ie. Allocate memory of size) n
    Time Complexity : O(1)
    */ 
    void set_size(int n)
    {
        size = n;
        a = new int [size];
    }

    /* Take input from user, it will take input from beginning of the array everytime
    Time Complexity : O(length) 
    */
    void input(int len)
    {
        length = len;
        for(int i=0;i<len;i++)
        {
            cout<<"Enter element "<<i<<" : ";
            cin>>a[i];
        }
    }

    int get_size()
    {
        return size;
    }
    int get_length()
    {
        return length;
    }
    
    /*Increase size of the array at runtime
    Allocate increased size to a new pointer and then copy old array elements to the new array
    then delete old array allocated memory and then make the old array pointer point to new array
    then make new array pointer point to NULL
    Time Complexity : O(size)
    */
    void increase_size()
    {
            int *p = new int[size+5];
            for(int i = 0;i<size;i++)
            {
                p[i] = a[i];
            }
            size = size + 5;
            delete [] a;
            a = p;
            p = NULL;
    }

    void append(int n)
    {
        if(length>=size)
        {
            increase_size();
        }
        
        a[length] =  n;
        length++;
    }

    
    void insert(int n,int index)
    {
        if(length>=size)
        {
            increase_size();
        }

        for(int i=length;i>=index;i--)
        {
            a[i+1] = a[i];
        }
        length++;
        a[index] = n;
    }


    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

    int get(int index)
    {
         if(index>=0 && index<=length)
         {
            return a[index];
         }
         return -1;
    }

    void set(int index, int n)
    {
         if(index>=0 && index<=length)
         {
            a[index] = n;
         }
    }

    int max()
    {
        int m = -1;
        for(int i=0;i<length;i++)
        {
            if(m < a[i])
                m = a[i];
        }
        return m;
    }

    int average()
    {
        int avg = 0;
        for(int i=0;i<length;i++)
        {
            avg = avg + a[i];
        }
        avg = avg/length;
        return avg;
    }
};

int main()
{
    Array arr;
    arr.set_size(5);
    arr.append(1);
    arr.append(2);
    arr.append(3);
    arr.append(4);
    arr.append(5);
    arr.insert(15,2);
    arr.display();
    cout<<"Average : "<<arr.average()<<"\n";
    cout<<"Max : "<<arr.max()<<"\n";
}

/* Operations
set_size(int);
get_size();
get_length();
input(int n)
append(int n);
insert(int n,int index);
display();
get(int index);
set(int index,int n);
max();
average();
*/
