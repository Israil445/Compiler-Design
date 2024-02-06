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

bool is_vowel(char c) {
    return tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u';
}

void solve(){

    string input;

    getline(cin, input);

    cout << input << nl;
    return;


    int vowel = 0, consonant = 0;
    string vowels, consonants, word;
    string vowel_words, consonant_words;

    for(char c : input) {
        if(is_vowel(c)) {
            vowel++; vowels += c;
        }
        else if(tolower(c) >= 'a' && tolower(c) <= 'z') {
            consonant++; consonants += c;
        }
        if(tolower(c) >= 'a' && tolower(c) <= 'z') {
            word += c;
        }
        else if(c == ' ') {
            // words are checked if they started with vowel
            if(is_vowel(word[0])) vowel_words += " " + word;
            else consonant_words += " " + word;
            word = "";
        }
    }
    // Also check the last word after which there is no space
    if(is_vowel(word[0])) vowel_words += " " + word;
    else consonant_words += " " + word;



    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"The vowels are: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonant<<endl;
    cout<<"The consonants are: "<<consonants<<endl;
    cout<<"Words started with vowel: "<<vowel_words<<endl;
    cout<<"Words started with consonant: "<<consonant_words;


}

int main() {

   freopen("input.txt" , "r" , stdin);
   solve();


	return 0;
}
