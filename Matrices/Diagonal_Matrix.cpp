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
        A=new int[n];
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Diaplay();
    
    ~Matrix();
};

void Matrix::Set(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}

int Matrix::Get(int i, int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    else
    {
        return 0;
    }
}
void Matrix::Diaplay()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                cout<<A[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
Matrix::~Matrix()
{
    delete [] A;
    cout<<"ok";
}


int main()

{
    Matrix m(4);

    m.Set(1,1,2);
    m.Set(2,2,9);
    m.Set(3,3,20);
    m.Set(4,4,99);
    cout<<m.Get(1,1)<<endl;
    m.Diaplay();
    return 0;
}