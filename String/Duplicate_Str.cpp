#include<iostream>
#include<string>

using namespace std;

void CountDuplicateCharH(string str)
{
    int H[52]={0};
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            H[str[i]-65]++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            H[str[i]-71]++;
        }   
    }
    for(int i=0;i<52;i++)
    {
        if(i<=25)
        {
            if(H[i]>1)
            {
                cout<<"Characte is duplicate is "<<char(i+65)<<" count is "<<H[i]<<endl;
            }
        }
        else
        {
            if(H[i]>1)
            {
                cout<<"Characte is duplicate is "<<char(i+71)<<" count is "<<H[i]<<endl;
            }
        }
    }
}

void CountDuplicareChr(string str)
{
    for(int i=0;i<str.length();i++)
    { 
        int count=1;
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j] && str[j]!=' ')
            {
                count++;
                str[j]=' ';
            }
        }
        if(count>1)
        {
            cout<<str[i]<<" is duplicate and count is:"<<count<<endl;

        }
    }
}

void FindDuplicateChar(string str)
{
    char lastduplicate;

    for(int i=0;i<str.length();i++)
    { 
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j] && str[j]!=' ' && str[j]!=lastduplicate)
            {
                cout<<str[i]<<" is duplicate"<<endl;
                lastduplicate=str[i];
                str[j]=' ';
            }
        }
    }
}

void FindDuplicateUsingBitOp(string str)
{
    int H=0,X=0;

    for(int i=0;i<str.length();i++)
    {
        X=1;
        X=X<<(str[i]-97);
        if((H&X)>0) //masking
        {
            cout<<str[i]<<" is Duplicate"<<endl;
        }
        else
        {
            H=H|X;  //merging
        }

    }
}

int main()

{
    string str="finding";

    //FindDuplicateChar(str);

    // CountDuplicareChr(str);


    //CountDuplicateCharH(str);

    FindDuplicateUsingBitOp(str);

    
    return 0;
}