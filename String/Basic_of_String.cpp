#include <iostream>
#include <string>

using namespace std;

int main()

{
    char temp;  // declaration
    temp = 'a'; // initialization
    cout << temp << endl;

    // charactor array

    char x[5];
    gets(x);
    cout<<x<<endl;
    char c[5] = {'A', 'B', 'C', 'D', 'E'};
    for (int i = 0; i < 5; i++)
    {
        cout << c[i];
    }
    cout<<endl;

    char ch[5]={65,66,67,68,69};    //type casting

    char name[]="Darshan";
    cout<<name<<endl;

    string st="Darshan Salunke";
    //getline(cin,st);
    cout<<st<<endl;

    //Length of string
    int i;
    for(i=1;name[i]!='\0';i++)
    {

    }
    cout<<i<<endl;

    cout<<st.length()<<endl;
    return 0;
}