#include<iostream>
#include<string>

using namespace std;

int main()

{
    string st="How are you";
    int Vcount=0;
    int Ccount=0;

    for(int i=0;i<st.length();i++)
    {
      if(st[i]=='a' || st[i]=='e' || st[i]=='o' || st[i]=='u' || st[i]=='i' || st[i]=='A' || st[i]=='E' || st[i]=='O'
            || st[i]=='U' || st[i]=='I')
            {
                Vcount++;
            } 
        else if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z'))
        {
            Ccount++;
        } 
    }
    cout<<"Vowle are:"<<Vcount<<endl;
    cout<<"Consonent are:"<<Ccount<<endl;
    return 0;
}