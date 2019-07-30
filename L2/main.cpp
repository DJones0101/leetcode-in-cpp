/*
 * 804. Unique Morse Code Words
 * Runtime: 4 ms, faster than 84.34% of C++ online submissions for Unique Morse Code Words.
 * Memory Usage: 9.3 MB, less than 17.86% of C++ online submissions for Unique Morse Code Words.
 * */

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    map<char , string> alphaToMorse = {
            {'a', ".-"},
            {'b', "-..."},
            {'c', "-.-."},
            {'d', "-.."},
            {'e', "."},
            {'f', "..-."},
            {'g', "--."},
            {'h', "...."},
            {'i', ".."},
            {'j', ".---"},
            {'k', "-.-"},
            {'l', ".-.."},
            {'m', "--"},
            {'n', "-."},
            {'o', "---"},
            {'p', ".--."},
            {'q', "--.-"},
            {'r', ".-."},
            {'s', "..."},
            {'t', "-"},
            {'u', "..-"},
            {'v', "...-"},
            {'w', ".--"},
            {'x', "-..-"},
            {'y', "-.--"},
            {'z', "--.."},};

    string convert(string &word){

        string ret;

        for(int i = 0; i < word.length(); i++){
            ret += alphaToMorse.at(word[i]);
        }
        return ret;
    }
    int uniqueMorseRepresentations(vector<string>& words) {

        set<string> list;
        for( string word : words ){
            string newWord = convert(word);
            list.insert(newWord);

        }
        return list.size();
    }
};


int main() {

    vector <string> words;
    words.push_back("gin");
    words.push_back("zen");
    words.push_back("gig");
    words.push_back("msg");

    Solution s;
    int num = s.uniqueMorseRepresentations(words);
    cout << " " << num;

    return 0;
}