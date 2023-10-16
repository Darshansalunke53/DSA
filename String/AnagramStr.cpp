#include <iostream>
#include <string>

using namespace std;

bool AnagramStr(string str1, string str2)
{
    int H[26] = {0};

    if (str1.length() == str2.length())
    {
        for (int i = 0; i < str1.length(); i++)
        {
            H[str1[i] - 97] += 1;
        }
        for (int i = 0; i < str2.length(); i++)
        {
            H[str2[i] - 97] -= 1;
            if (H[str2[i] - 97] < 0)
            {
                return false;
            }
        }
        return true;
    }

    return false;
}

bool AnagramBitOp(string str1, string str2)
{
    int H = 0, X = 0, Y = 0;
    if (str1.length() == str2.length())
    {
        for (int i = 0; i < str1.length(); i++)
        {
            X = 1;
            X = X << (str1[i] - 97);
            if (H & X > 0)
            {
                continue;
            }
            else
            {
                H = X|H;
            }
        }
        for (int i = 0; i < str2.length(); i++)
        {
            X = 1;
            X = X << (str2[i] - 97);
            if (Y & X > 0)
            {
                continue;
            }
            else
            {
                Y = X | Y;
            }
        }
        if(H&Y>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

int main()

{
    string str1 = "decimal";
    string str2 = "medical";

    if (AnagramBitOp(str1, str2))
    {
        cout << "String are Anagram" << endl;
    }
    else
    {
        cout << "String are not Anagram" << endl;
    }

    return 0;
}