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

string syntax;

bool operatorCheck()
{
    int n = syntax.size() - 1;
    if (syntax[0] == '+' or syntax[0] == '-' or syntax[0] == '*' or syntax[0] == '/')
    {
        return false;
    }
    if (syntax[n] == '+' or syntax[n] == '-' or syntax[n] == '*' or syntax[n] == '/')
    {
        return false;
    }

    for (int i = 1; syntax[i]; i++)
    {
        if (syntax[i] == '+' or syntax[i] == '-' or syntax[i] == '*' or syntax[i] == '/')
        {
            if (syntax[i - 1] == '+' or syntax[i - 1] == '-' or syntax[i - 1] == '*' or syntax[i - 1] == '/')
            {
                return false;
            }
            if (syntax[i - 1] == '(')
            {
                return false;
            }
        }
        if (syntax[i - 1] == '+' or syntax[i - 1] == '-' or syntax[i - 1] == '*' or syntax[i - 1] == '/')
        {
            if (syntax[i] == ')')
            {
                return false;
            }
        }
    }
    return true;
}

bool bracketCheck()
{

    stack<char> brackets;
    for(int i=0; i<syntax.size(); i++)
    {
        if(syntax[i] == '(')
        {
            brackets.push('(');
        }

        else if(syntax[i]==')')
        {
            if(brackets.size())
            {
                brackets.pop();
            }
            else return false;
        }

    }

    if(brackets.size() == 0) return true;
    else return false;

}

void solve()
{

    cin >> syntax;
    if(operatorCheck() && bracketCheck())
    {
        cout << "Valid Expression\n";
    }

    else
    {

        cout << "Not Valid Expression\n";
    }


}

int main()
{

    freopen("input.txt", "r", stdin);
    solve();


    return 0;
}
