#include<stdio.h>

struct Matrix
{
    int A[10];
    int n;
};

void Set_Value(struct Matrix *m,int i, int j, int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
}

int get_Value(struct Matrix m,int i, int j)
{
    if(i==j)
    {
        return m.A[i-1];
    }
    else
    {
        return 0;
    }
}

void Display(struct Matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
            {
                printf("%d ",m.A[i]);
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }
}

int main()
{
   struct Matrix m;
   m.n=4;

   Set_Value(&m,1,1,2);
   Set_Value(&m,2,2,4);
   Set_Value(&m,3,3,5);
   Set_Value(&m,4,4,21);

   Display(m);

   printf("%d ",get_Value(m,1,1));
   
    return 0;
}