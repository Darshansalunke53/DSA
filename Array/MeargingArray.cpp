#include<iostream>
#include<string>

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


Array *Mearge(Array arr1, Array arr2)
{
    Array *arr3;
    arr3 = new Array;

    int i=0,j=0,k=0;

    while(i<arr1.length && j<arr2.length)
    {
        if(arr1.A[i]<arr2.A[j])
        {
            arr3->A[k++]=arr1.A[i++];
        }
        else
        {
            arr3->A[k++]=arr2.A[j++];
        }
    }

    for(;i<arr1.length;i++)
    {
        arr3->A[k++]=arr1.A[i];
    }
    for(;j<arr1.length;j++)
    {
        arr3->A[k++]=arr1.A[j];
    }

    arr3->length=arr1.length+arr2.length;
    arr3->size=10;

    return arr3;
}
int main()

{
    Array arr1={{2,9,21,28,35},10,5};
    Array arr2={{2,3,16,18,28},10,5};
    Array *arr3;
    
    arr3=Mearge(arr1,arr2);

    display(*arr3);
    
    return 0;
}