#include <iostream>
#include <string>

using namespace std;

class Array
{
private:
    int *A{nullptr};
    int size{0};
    int length{0};

    void swap(int &a, int &b)
    {
        int temp{};
        temp=a;
        a=b;
        b=temp;
    }

public:

    Array()
    {
        size=10;
        length=0;
        A= new int[size];
    }
    Array(int size)
    {
        this->size = size;
        length=0;
        A = new int[size];
    }

    ~Array()
    {
        delete[] A;
        cout << "\nArray destroyed" << endl;
    }


    void Create()
    {
        cout << "Enter a length of element:" << flush;
        cin >> length;
        cout << "Enter a elements in array:" << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    void Display()
    {
        if (size >= length)
        {
            for (int i = 0; i < length; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
            cout <<"Length of array:"<<length<<endl;
        }
    }

    void AppendElement(int x);

    void InsertElement(int index, int x);

    int DeleteElement(int index);

    int Linearsearch(int key);

    int LinearSearchTrans(int key);

    int LinearSeachHead(int key);

    int BinarySearch(int key);


};

void Array::AppendElement(int x)
{
    if (size > length)
    {
        A[length] = x;
        length++;
    }
    else
    {
        cout << "Array is full!" << endl;
    }
}

void Array::InsertElement(int index, int x)
{
    if(index>=0 && index<=length)
    {
        for(int i=length;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}

int Array::DeleteElement(int index)
{
    int x=A[index];
    if(index>=0 && index<=length)
    {
        for(int i=index;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
    }
    length--;
    return x;

}

int Array::Linearsearch(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==key)
        {
            return i;
        }
    }

    return -1;
}

int Array::LinearSearchTrans(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==key)
        {
            swap(A[i],A[i-1]);
            return i-1;
        }

    }

    return -1;
}

int Array::LinearSeachHead(int key)
{
    for(int i=0;i<length;i++)
    {
        if(A[i]==key)
        {
            swap(A[0],A[i]);
            return 0;
        }
    }

    return -1;
}



int main()

{
    Array arr(10);

    arr.Create();
    arr.Display();
    //arr.InsertElement(3,10);
    //cout<<arr.DeleteElement(3)<<endl;
    //cout<<arr.Linearsearch(5);

    //cout<<arr.LinearsearchTrans(4)<<endl;
    //cout<<arr.LinearSeachHead(2)<<endl;
    arr.Display();
    


    return 0;
}
