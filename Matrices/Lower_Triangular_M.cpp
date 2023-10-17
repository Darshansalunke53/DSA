#include<iostream>
#include<string>

using namespace std;

class Matrix
{
private:
    int n;
    int *A;
public:
    Matrix(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Diaplay();
    
    ~Matrix()
    {
        delete [] A;
    }
};

void Matrix::Set(int i, int j, int x)
{
    if(i>=j)
    {
        A[(n*(j-1)-((j-2)*(j-1)/2))+(i-j)]=x;
    }
}

int Matrix::Get(int i, int j)
{
    if(i>=j)
    {
        return A[((n*(j-1))-((j-2)*(j-1)/2))+(i-j)];
    }
    else
    {
        return 0;
    }
}

void Matrix::Diaplay()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<A[((n*(j-1))-((j-2)*(j-1)/2))+(i-j)]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }

        cout<<endl;
    }
}

int main()

{
    Matrix m(4);

    cout<<"Enter all the element:"<<endl;
    int x;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cin>>x;
            m.Set(i,j,x);
        }
    }
    cout<<endl<<endl;
    m.Diaplay();
    
    return 0;
}