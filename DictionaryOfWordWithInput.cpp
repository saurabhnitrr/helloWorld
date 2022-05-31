#include<bits/stdc++.h>
using namespace std;

bool isPossibleWord(vector<int> inputFreq, string word)
{
    //// if the input does not contain that letter, we don't proceed since the word cant be made.
    for(int i=0;i<word.size();i++)
    {
        if(inputFreq[word[i]-'a'] ==0)
        {
            return false;
        }
        else
        {
            inputFreq[word[i]-'a']--;
        }
    }
    return true;
}

vector<string> wordDict(vector<string> words, string input) 
{
    vector<string> res;
    vector<int> inputFreq(26,0);
    int maxLen =0;
    for(int i=0;i<input.size();i++)
    {
        inputFreq[input[i]-'a']++;
    }
    for(int i=0;i<words.size();i++)
    {
        // Check if the word can be made using the letters in the bucket.
        if(isPossibleWord(inputFreq, words[i]))
        {
            //// If we find a word same as the longest word, add it to the list
            if(words[i].length()==maxLen)
            {
                res.push_back(words[i]);
                cout<<maxLen<<" "<<words[i]<<endl;
            }
            else if(words[i].size()> maxLen) // If we find a longer word, clear the list and add the new word and update the len.
            {
                
                res.clear();
                res.push_back(words[i]);
                maxLen = words[i].length();
                cout<<maxLen<<" "<<words[i]<<endl;
            }
        }
    }
    return res;
}
int main() {
    vector<string> v = {"to","banana", "toes", "dogs", "ababcd", "elephant"};
    string inp = "ogtdes";
    auto k = wordDict(v, inp);
    // cout<<k.size();
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }
    // std::cout << "Hello World!\n";
}
