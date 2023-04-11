#include <iostream>
using namespace std ;
string accum(string s)
{
    string a;
    for(int i=0;i<s.length();i++)
    {
        cout<<"len : "<<s.length()<<endl;
        a+=toupper(s[i]);
        for(int j=0;j<s.length();j++)
        {
            if(j<i)
               a+=tolower(s[i]);
        }
        if(i != s.length()-1)
            a+="-";
    }
    return a;
}
int main()
{
    string str1="AbCde";
    cout<<accum(str1)<<endl;
    return 0;
}
/*
#include <iostream>
#include <string>

using namespace std;

string accum(string str) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        int count = i + 1;

        // Convert the current character to uppercase.
        result += toupper(c);

        // Append lowercase characters based on the current index.
        for (int j = 1; j < count; j++) {
            result += tolower(c);
        }

        // Append a hyphen if it's not the last character.
        if (i != str.length() - 1) {
            result += "-";
        }
    }

    return result;
}

int main() {
    string str1 = "abcd";
    string str2 = "RqaEzty";
    string str3 = "cwAt";

    cout << accum(str1) << endl;
    cout << accum(str2) << endl;
    cout << accum(str3) << endl;

    return 0;
}
*/
