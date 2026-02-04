#include<iostream>
#include<vector>
using namespace std;

 void reverseString(vector<char>& s) {
        int st = 0;
        int ed = s.size() - 1;
        while(st<=ed)
        {
            swap(s[st] , s[ed]);
            st++;
            ed--;
        }
    }

int main()
{
    vector<char> s{'a','f','e','u'};
    reverseString(s);
}