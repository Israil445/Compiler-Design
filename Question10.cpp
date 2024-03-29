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

void solve(){

    int n;
    cout<<"Enter the number of production rule: ";
    cin>>n;
    cin.ignore();
    string gl[n], gr[n];
    for(int i = 0;i<n;i++)
    {
        string temp;
        cout<<"Enter the production rule"<<i+1<<": ";
        getline(cin,temp);

        bool left = true;
        for(int j = 0;j<temp.length();j++)
        {
            if(temp[j] == ' ')
                continue;
            else if(temp[j] == '=')
                left = false;
            else
            {
                if (left)
                    gl[i].push_back(temp[j]);
                else
                    gr[i].push_back(temp[j]);
            }
        }
    }
    cout<<"\nGrammar: "<<endl;
    for(int i = 0;i<n;i++)
        cout<<gl[i]<<" -> "<<gr[i]<<endl;

    string in;
    cout<<"\nEnter a input String: ";
    cin>>in;

    string st = "$";
    in.push_back('$');

    while(in!="$")
    {
        st.push_back(in[0]);
        in.erase(in.begin());
        cout<<"Stack: "<<st<<endl;
        cout<<"Input Buffer: "<<in<<endl;
        cout<<"SHIFT"<<endl<<endl;

        for(int i = 0;i<n;i++)
        {
            bool reduce = false;
            if(st.find(gr[i])<st.length())
            {
                st.erase(st.find(gr[i]), st.length());
                st+=gl[i];

                cout<<"Stack: "<<st<<endl;
                cout<<"Input Buffer: "<<in<<endl;
                cout<<"Reduce: "<<gl[i]<<" -> "<<gr[i]<<endl<<endl;
                reduce = true;
            }
            if(reduce)
                i=-1;
        }
    }
    in+=gl[0];
    if(st == in)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;




}

int main() {

   //freopen("input.txt" , "r" , stdin);
   solve();


	return 0;
}
