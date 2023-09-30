#include <iostream>
#include <string>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

void AppendElement(Array &arr, int x)
{
    if (arr.size > arr.length)
    {
        arr.A[arr.length++] = x;
    }
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

void swap(int &x, int &y)
{
    int temp{0};

    temp = x;
    x = y;
    y = temp;
}

int moveTohead(Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(arr->A[i], arr->A[0]);

            return 0;
        }
    }

    return -1;
}

int TranspositionSearch(Array &arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            swap(arr.A[i], arr.A[i - 1]);

            return i - 1;
        }
    }

    return -1;
}

int LinearSearch(Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
    }

    return -1;
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

int Get(Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}

int Max(Array arr)
{
    int max = arr.A[0];
    for (auto ar : arr.A)
    {
        if (ar > max)
        {
            max = ar;
        }
    }

    return max;
}

int Min(Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }

    return min;
}

int Sum(Array arr)
{
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total += arr.A[i];
    }

    return total;
}

int Avg(Array arr)
{
    return Sum(arr) / arr.length;
}

void ArrayReverse(Array &arr)
{
    int B[arr.length];

    for (int i = arr.length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr.A[i];
    }

    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = B[i];
    }
}

void ReverseSwap(Array *arr)
{
    int temp = 0;
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void LeftShift(Array &arr, int n)
{
    while (n)
    {
        cout << arr.A[0] << endl;
        for (int i = 0; i < arr.length; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }
        arr.A[arr.length - 1] = 0;
        display(arr);
        cout << endl;
        --n;
    }
}

void LeftRotation(Array &arr, int n)
{
    int temp=0;
    while (n)
    {
        temp=arr.A[0];
        for (int i = 0; i < arr.length; i++)
        {
            arr.A[i] = arr.A[i + 1];
        }
        arr.A[arr.length - 1] = temp;
        display(arr);
        cout << endl;
        --n;
    }
}

bool isSortedArray(Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false;
        }
    }

    return true;
}

void InsertInSortedArray(Array *arr, int x)
{
    
    int i=arr->length-1;
    if(arr->size==arr->length)
    {
        return;
    }
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

void Rearrenge(Array *arr) //-ve one side and +ve one side
{
    int i=0;
    int j=arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }

        while (arr->A[j]>=0)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr->A[i],arr->A[j]);
        }
        
        i++;
        j--;
    }
}

int main()

{
    Array arr{{2, 3, 4, 5, 6}, 10, 5};
    // AppendElement(arr,15);
    // InsertElement(&arr,3,12);
    // DeleteElement(arr,2);
    // cout<<"Element at index: "<<LinearSearch(arr, 3)<<endl;
    // cout<<"Element at index: "<<TranspositionSearch(arr, 6)<<endl;
    // cout<<"Element at index: "<<moveTohead(&arr, 6)<<endl;
    // cout<<"Element at index: "<<BinarySearch(arr,5);

    // cout<<Get(arr,0);
    // Set(&arr, 0, 12);
    // cout<<Max(arr);
    // cout<<Min(arr);
    // cout<<Sum(arr);
    // cout<<Avg(arr);

    // ArrayReverse(arr);

    // ReverseSwap(&arr);

    //LeftShift(arr, 2);

    //LeftRotation(arr,5);


    // if(isSortedArray(arr))
    // {
    //     InsertInSortedArray(&arr,1);
    //     display(arr);
    // }

    //Rearrenge(&arr);

    display(arr);


    return 0;
}