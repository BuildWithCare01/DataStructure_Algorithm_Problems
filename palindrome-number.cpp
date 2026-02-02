#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int x) {
        int st = 0 ;
        string s = to_string(x);
        int ed = s.length()-1;
        while(st<=ed)
        {
            if(s[st]==s[ed])
            {
                st++;
                ed--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

int main()
{
    cout << isPalindrome(-928) << endl;
}