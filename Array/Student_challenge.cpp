#include <iostream>
#include <string>

using namespace std;

int Max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int Min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

void MissingElmUnsorted(int arr[], int n) // multiple missing element not duplicate element
{
    int low = Min(arr, n);
    int high = Max(arr, n);

    int H[high] = {0};

    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }

    for (int i = 1; i <= high; i++)
    {
        if (H[i] == 0)
        {
            cout << "Missing Element is:" << i << endl;
        }
    }
}

void MultiMissingElem(int arr[], int n) // element are sorted
{
    int diff = arr[0] - 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "Mising Element is:" << i + diff << endl;
                diff++;
            }
        }
    }
}

void MissElementRand(int arr[], int n) // number are not start from 1
{
    int diff = arr[0] - 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing Element is:" << i + diff << endl;
            break;
        }
    }
}

void MissElement(int arr[], int n) // sum of the fist n natural numbers
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int sn = arr[n - 1] * (arr[n - 1] + 1) / 2; // Sum of first n number

    cout << "Missing number is:" << sn - sum << endl;
}

void FindDuplicate(int arr[], int n) // for sorted array
{
    int lastDuplicate = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDuplicate)
        {
            cout << "Duplicate Element is:" << arr[i] << endl;
            lastDuplicate = arr[i];
        }
    }
}

void CountDuplicateElm(int arr[], int n) // for sorted array
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while (arr[j] == arr[i])
            {
                j++;
            }
            cout << "Duplicate element is " << arr[i] << " count is " << j - i << endl;
            i = j;
        }
    }
}

void FindingDuplicateUsingHash(int arr[], int n)
{
    int max = Max(arr, n);
    int H[max + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (H[i] > 1)
        {
            cout << "Duplicate element is " << i << " count is " << H[i] << endl;
        }
    }
}

void DuplicateUnsorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {

            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1)
            {
                cout << "Duplicate element is " << arr[i] << " count is " << count << endl;
            }
        }
    }
}

void FindPair(int arr[], int n, int k)
{
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
            if(arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
            }
       }

    }
}

void FindPairHash(int arr[],int n,int k)
{
    int max=Max(arr,n);
    int H[max+1]={0};

    for(int i=0;i<n;i++)
    {
        if(H[k-arr[i]]==1)
        {
            cout<<arr[i]<<"+"<<k-arr[i]<<"="<<k<<endl;
        }
        H[arr[i]]++;
    }
}

void FindPairSorted(int arr[], int n, int k) //without duplicate
{
    int i=0, j=n-1;

    while(i<j)
    {
        if(arr[i]+arr[j]==k) 
        {
            cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
            i++;
            j++;
        }
        else if(arr[i]+arr[j]<k)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

void MinMaxScan(int arr[], int n)
{
    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        else if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Min="<<min<<","<<"Max="<<max;
}

int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};

    // MissElement(arr,11);

    int arr1[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};

    // MissElementRand(arr1, 11);

    int arr2[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};

    // MultiMissingElem(arr2,11);

    int arr3[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};

    // MissingElmUnsorted(arr3,10);

    int arr4[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    // FindDuplicate(arr4,10);
    // CountDuplicateElm(arr4,10);
    // FindingDuplicateUsingHash(arr4,10);

    int arr5[]={8,3,6,4,6,5,6,8,2,7};

    //DuplicateUnsorted(arr5,10); 

    int arr6[]={6,3,8,10,16,7,5,2,9,14};

    //FindPair(arr6,10,10);
    //FindPairHash(arr6,10,10);

    int arr7[]={1,3,4,5,6,8,9,10,12,14};
    //FindPairSorted(arr7,10,10);

    int arr8[]={5,8,3,9,6,2,10,7,-1,4};
    MinMaxScan(arr8,10);

    return 0;
}