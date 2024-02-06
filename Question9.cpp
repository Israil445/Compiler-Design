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

vector<string> subject = {"Sagor", "Selim", "Salma", "Nipu", "he", "she", "I", "we", "you", "they"};
vector<string> verb = {"read", "eat", "take", "run", "write"};
vector<string> noun = {"book", "cow", "dog", "home", "grass", "rice", "mango"};

void solve(){

    string input;
    while (getline(cin, input))
    {
        // Store the words of the sentence in an vector
        string word;
        vector<string> words;
        for (char c : input)
        {
            if (c != ' ')
            {
                word += c;
            }
            else
            {
                words.push_back(word);
                word = "";
            }
        }
        // Push the last word
        words.push_back(word);

        bool isValid = true;

        // Check if the sentence has more than 3 or less than 2 words
        if (words.size() > 3 || words.size() < 2)
        {
            isValid = false;
        }
        // Check if the words are in proper sequence;
        else
        {
            if (find(subject.begin(), subject.end(), words[0]) == subject.end())
                isValid = false;
            if (find(verb.begin(), verb.end(), words[1]) == verb.end())
                isValid = false;
            if (words.size() == 3)
            {
                if (find(noun.begin(), noun.end(), words[2]) == noun.end())
                    isValid = false;
            }
        }

        if (isValid)
            cout << input << " : Valid\n";
        else
            cout << input << " : Invalid\n";
    }





}

int main() {

   freopen("input.txt" , "r" , stdin);
   solve();


	return 0;
}
