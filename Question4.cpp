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

bool isVariable(string x)
{
    bool mark = true;
    if ((tolower(x[0]) < 'i') or (tolower(x[0]) > 'n'))
    {
        mark = false;
    }
    for (int i = 1; x[i]; i++)
    {
        if (tolower(x[i]) >= 'a' and tolower(x[i]) <= 'z')
        {
            continue;
        }
        else if (x[i] >= '0' and x[i] <= '9')
        {
            continue;
        }
        else
        {
            mark = false;
            break;
        }
    }
    return mark;
}

bool isInt(string x)
{
    bool mark = true;
    for (int i = 0; x[i]; i++)
    {
        if (isdigit(x[i]))
            continue;
        else
        {
            mark = false;
            break;
        }
    }
    return mark;
}


void solve(){

    string word;
    cin >> word;
    if (isVariable(word))
    {
        cout << "Integer Variable";
    }
    else if (word.size() <= 4 and isInt(word))
    {
        cout << "ShortInt Number";
    }
    else if (isInt(word))
    {
        cout << "LongInt Number";
    }
    else
        cout << "Invalid Input or Undefined";




}

int main() {

   freopen("input.txt" , "r" , stdin);
   solve();


	return 0;
}
