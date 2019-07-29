/* 1108. Defanging an IP Address
 */

#include <iostream>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string replace = "[.]";
        string result = "";
        for (int i = 0; i < address.length(); i++ ){

            if(address[i] == '.'){
                result += replace;
            }else{
                result += address[i];
            }
        }
        return result;

    }
};

int main() {

    string input = "1.1.1.1";
    string input1 = "255.100.50.0";
    Solution solution;
    string output = solution.defangIPaddr(input);
    string output1 = solution.defangIPaddr(input1);

    cout << "\n" << output;
    cout << "\n" << output1;
    return 0;
}