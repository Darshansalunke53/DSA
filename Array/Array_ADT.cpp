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
        temp = a;
        a = b;
        b = temp;
    }

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int size)
    {
        this->size = size;
        length = 0;
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
            cout << "Length of array:" << length << endl;
        }
    }

    void AppendElement(int x);

    void InsertElement(int index, int x);

    int DeleteElement(int index);

    int Linearsearch(int key);

    int LinearSearchTrans(int key);

    int LinearSeachHead(int key);

    int BinarySearch(int key);

    int GetVal(int index);

    void SetValue(int index, int val);

    int MaxNo();

    int MinNo();

    int SumElem();

    void ArrReverse();

    void LeftShift();

    void LeftRotation();

    void RightShift();

    void RightRotation();

    bool IsSorted();

    void insertingSortedArr(int val);

    void RearrengeArr();

    Array *MeargeArr(Array arr2);

    Array *UnionArr(Array arr2);

    Array *IntersectionArr(Array arr2);

    Array *DifferenceArr(Array arr2);
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
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
}

int Array::DeleteElement(int index)
{
    int x = A[index];
    if (index >= 0 && index <= length)
    {
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
    }
    length--;
    return x;
}

int Array::Linearsearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int Array::LinearSearchTrans(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
        {
            swap(A[i], A[i - 1]);
            return i - 1;
        }
    }

    return -1;
}

int Array::LinearSeachHead(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
        {
            swap(A[0], A[i]);
            return 0;
        }
    }

    return -1;
}

int Array::BinarySearch(int key)
{
    int low = 0;
    int high = length - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int Array::GetVal(int index)
{
    return A[index];
}

void Array::SetValue(int index, int val)
{
    A[index] = val;
}

int Array::MaxNo()
{
    int max = A[0];

    for (int i = 1; i < length; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }

    return max;
}

int Array::MinNo()
{
    int min = A[0];
    for (int i = 1; i < length; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }

    return min;
}

int Array::SumElem()
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }

    return sum;
}

void Array::ArrReverse()
{
    int ch;
    do
    {
        cout << "Enter Your Choice\n"
             << "1] Using Double Array\n"
             << "2] Using Swap Method\n";

        cout << "\nEnter your choice:";
        cin >> ch;
        int B[size];

        switch (ch)
        {
        case 1:

            for (int i = length - 1, j = 0; i >= 0; i--, j++)
            {
                B[j] = A[i];
            }

            for (int i = 0; i < length; i++)
            {
                A[i] = B[i];
            }

            Display();

            break;
        case 2:
            for (int i = 0, j = length - 1; i < j; i++, j--)
            {
                swap(A[i], A[j]);
            }

            Display();

            break;

        default:
            break;
        }
    } while (ch < 3);
}

void Array::LeftShift()
{
    for (int i = 0; i < length; i++)
    {
        A[i] = A[i + 1];
    }
    A[length - 1] = 0;
}

void Array::LeftRotation()
{
    int x = A[0];
    for (int i = 0; i < length; i++)
    {
        A[i] = A[i + 1];
    }
    A[length - 1] = x;
}

void Array::RightShift()
{
    for (int i = length; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = 0;
    length++;
}

void Array::RightRotation()
{
    for (int i = length; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = A[length];
    length++;
}

bool Array::IsSorted()
{
    for (int i = 0; i < length; i++)
    {
        if (A[i] > A[i + 1])
        {
            return false;
        }
    }

    return true;
}

void Array::insertingSortedArr(int val)
{
    int i = length - 1;

    while (A[i] > val)
    {
        A[i + 1] = A[i];
        i--;
    }

    A[i + 1] = val;
    length++;
}

void Array::RearrengeArr()
{
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (A[i] < 0)
        {
            i++;
            continue;
        }
        else if (A[j] >= 0)
        {
            j--;
            continue;
        }
        else if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
}

Array *Array::MeargeArr(Array arr2)
{
    int i = 0, j = 0, k = 0;

    Array *arr3;

    arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i];
            i++;
        }
        else
        {
            arr3->A[k++] = arr2.A[j];
        }
    }
    for (; i < length; i++)
    {
        arr3->A[k++] = A[i];
    }

    for (; j < arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }

    arr3->length = k;

    return arr3;
}

Array *Array::UnionArr(Array arr2)
{
    int i = 0, j = 0, k = 0;

    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i++];
        }
        else if (arr2.A[j] < A[i])
        {
            arr3->A[k++] = arr2.A[j++];
        }
        else
        {
            arr3->A[k++] = A[i++];
            j++;
        }
    }

    for (; i < length; i++)
    {
        arr3->A[k++] = A[i];
    }

    for (; j < arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }

    arr3->length = k;

    return arr3;
}

Array *Array::IntersectionArr(Array arr2)
{
    int i = 0, k = 0;

    Array *arr3 = new Array(length + arr2.length);

    // unsorted Array O(n^2) time
    while (i < length)
    {
        for (int j = 0; j < arr2.length; j++)
        {
            if (A[i] == arr2.A[j])
            {
                arr3->A[k++] = A[i];
            }
        }

        i++;
    }

    // If array are sorted O(n) time
    //  int j=0;

    // while(i<length && j<arr2.length)
    // {
    //     if (A[i] < arr2.A[j])
    //     {
    //         i++;
    //     }
    //     else if(arr2.A[j] < A[i])
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         arr3->A[k++]=A[i++];
    //         j++;
    //     }
    // }

    arr3->length = k;

    return arr3;
}

Array * Array::DifferenceArr(Array arr2)
{
    int i=0,k=0;
    

    Array *arr3=new  Array(length+arr2.length);

    while(i<length)
    {
        bool flag=true;
        for(int j=0;j<arr2.length;j++)
        {
            if(A[i]==arr2.A[j])
            {
                flag=false;
            }
        }
        if(flag)
        {
            arr3->A[k++]=A[i];
        }
        i++;
    }

    arr3->length=k;

    return arr3;
}

int main()

{
    Array arr1(10);
    Array arr2(10);
    Array *arr3{nullptr};

    arr1.Create();
    arr1.Display();
    arr2.Create();
    arr2.Display();
    // arr.InsertElement(3,10);
    // cout<<arr.DeleteElement(3)<<endl;
    // cout<<arr.Linearsearch(5);

    // cout<<arr.LinearsearchTrans(4)<<endl;
    // cout<<arr.LinearSeachHead(2)<<endl;

    // cout<<arr.BinarySearch(3)<<endl;

    // arr.ArrReverse();

    // arr.LeftShift();
    // arr.LeftRotation();

    // arr.RightShift();
    // arr.RightRotation();

    // arr.insertingSortedArr(12);
    // arr.RearrengeArr();

    // arr3=arr1.MeargeArr(arr2);

    // arr3 = arr1.UnionArr(arr2);

    //arr3 = arr1.IntersectionArr(arr2);

    arr3=arr1.DifferenceArr(arr2);

    arr3->Display();

    return 0;
}
