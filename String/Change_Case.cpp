#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()

{
    //Change to lower case
    //malualy
    char A[]="WELCOM";
    for(int i=0;A[i]!='\0';i++)
    {
        A[i]=A[i]+32;
    }
    cout<<A<<endl;
    //Using tolower(string) function

    for(auto at:A)
    {
        cout<<char(tolower(at));
    }
    cout<<endl;
    //using toupper(string) function

    for(auto st:A)
    {
        cout<<char(toupper(st));
    }
    return 0;
}