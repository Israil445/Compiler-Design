#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef double lf;

#define   pb         push_back
#define   pf         push_front
#define   ff         first
#define   ss         second
#define   mpr        make_pair
#define   nl         "\n"

bool isCharacterVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'c' || str[1] != 'h' && str[2] != '_')
    {
        return false;
    }

    bool isOK = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isOK = false;
            break;
        }
    }
    return isOK;
}

bool isBinaryVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'b' || str[1] != 'n' && str[2] != '_')
    {
        return false;
    }

    bool isOK = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isOK = false;
            break;
        }
    }
    return isOK;
}

bool isBinaryNumber(string str)
{
    int size = str.size();

    if (size < 2)
        return false;

    if (str[0] != '0')
    {
        return false;
    }

    if (str[1] != '0' && str[1] != '1')
    {
        return false;
    }

    // Check
    bool isOK = true;

    for (int i = 2; i < str.size(); i++)
    {
        if (str[i] != '1' && str[i] != '0')
        {
            isOK = false;
            break;
        }
    }
    return isOK;
}


void solve(){

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        cout << "Scanned :" << str << endl;
        if (isCharacterVariable(str))
        {
            cout << "Character Variable" << endl;
        }
        else if (isBinaryVariable(str))
        {
            cout << "Binary Variable" << endl;
        }
        else if (isBinaryNumber(str))
        {
            cout << "Binary Number" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }

    }




}

int main() {

   freopen("input.txt" , "r" , stdin);
   solve();


	return 0;
}
