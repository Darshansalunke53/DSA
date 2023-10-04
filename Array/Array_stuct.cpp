#include <iostream>
#include <string>

using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout<<endl;
}

void Create(Array &arr)
{
    cout << "Enter a length of element:" << flush;
    cin >> arr.length;
    cout << "Enter a elements in array:" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << "Array element: " << i << " = " << flush;
        cin >> arr.A[i];
    }
    cout<<endl;
}

void InsertElement(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
    cout<<endl;
}

int DeleteElement(Array &arr, int index)
{
    int x = arr.A[index];
    if (index >= 0 && index <= arr.length)
    {
        for (int i = index; i < arr.length - 1; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }

        arr.length--;
    }

    return x;
}

int BinarySearch(Array arr, int key)
{
    int low = 0;
    int hig = arr.length - 1;

    while (low <= hig)
    {
        int mid = (low + hig) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            hig = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()

{
    Array arr;

    int ch;

    cout << "Enter the size of array:" << flush;
    cin >> arr.size;

    arr.A = new int[arr.size];

    cout<<endl;

    do
    {
        cout << "-:Menu:-" << endl<<endl;
        cout << "1.Create Array" << endl;
        cout << "2.Display Array" << endl;
        cout << "3.Insert into Array" << endl;
        cout << "4.Delete Element in Array" << endl;
        cout << "5.Binary Search" << endl;

        cout << "Enter your Choices:-" << flush;
        cin >> ch;

        switch (ch)
        {
        case 1:
            Create(arr);
            break;

        case 2:
            display(arr);
            break;

        case 3:
            int x1;
            int index;
            cout << "Enter a element and index" << endl;
            cin >> x1 >> index;

            InsertElement(&arr, x1, index);
            break;

        case 4:
            int ind;
            cout << "Enter a index" << endl;
            cin >> ind;

            cout << "Deleted element:" << DeleteElement(arr, ind);
            break;

        case 5:
            int x2;
            int in;
            cout << "Enter a element and index" << endl;
            cin >> x2 >> in;

            InsertElement(&arr, x2, in);
            break;

        case 6:
            int x3;
            cout << "Enter a element" << endl;
            cin >> x3;

            cout << "Index of element:" << BinarySearch(arr, x3);
            break;
        }

    } while (ch<=6);

    delete[] arr.A;

    return 0;
}