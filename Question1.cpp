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


    string input;
    getline(cin, input);

    cout << input << nl;
    return;

    ll word = 1, letter = 0, digit = 0, other_character = 0;
    string letters, digits, other_characters;

    for(char c : input) {
        if(c == ' ') word++; // Number of words are counted using space
        else if(tolower(c) >= 'a' && tolower(c) <= 'z') {
            letter++; letters += c; // Count letter and from a string
        }
        else if(c >= '0' && c <= '9') {
            digit++; digits += c; // Count digit and from a string
        }
        else {
            other_character++; other_characters += c;
        }

    }
    cout<<"Number of words: "<<word<<nl;
    cout<<"Number of letters: "<<letter<<nl;
    cout<<"Number of digits: "<<digit<<nl;
    cout<<"Number other of characters: "<<other_character<<nl;

    cout<<"\nThe letters are: "<<letters<<nl;
    cout<<"The digits are: "<<digits<<nl;
    cout<<"The characters are: "<<other_characters<<nl;

  


}

int main() {

   freopen("input.txt" , "r" , stdin);
   solve();
  

	return 0;
}