#include<stdio.h>
#include<stdlib.h>

struct Matrix
{
    int *A;
    int n;
};

void Set_Value(struct Matrix *m,int i, int j, int x)
{
    if(i>=j)
    {
        m->A[i*(i-1)/2+j-1]=x;
    }
}

int get_Value(struct Matrix m,int i, int j)
{
    if(i>=j)
    {
        return m.A[(i*(i-1)/2)+(j-1)];
    }
    else
    {
        return 0;
    }
}

void Display(struct Matrix m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            if(i>=j)
            {
                printf("%d ",m.A[(i*(i-1)/2)+(j-1)]);
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
    printf("enter number of element:");
    scanf("%d",&m.n);

    m.A=(int *)malloc((m.n*(m.n-1)/2)*sizeof(int));

    printf("Enter all the element:\n");
    int x;
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            Set_Value(&m,i,j,x);
        }
    }

    printf("\n\n");

    Display(m);

    
    return 0;
}