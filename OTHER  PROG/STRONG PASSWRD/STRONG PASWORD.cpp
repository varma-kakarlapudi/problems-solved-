//     STRONG PASSWORD  !!
/*
Louise joined a social networking site to stay in touch with her friends. 
The signup page required her to input a name and a password.
However, the password must be strong.
The website considers a password to be strong if it satisfies the following criteria:

Its length is at least 6.
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+


numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

*/


#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    // Return the minimum number of characters to make the password strong

    int digit=0,capL=0,smL=0,oth=0,l=6,ans=0;
    for(int i=0;s[i];i++)
    {
        if(s[i] > 96)
            smL++;
        else if(s[i] > 64  && s[i] <93)
            capL++;
        else if(s[i] >47  && s[i] < 58)
            digit++;
        else if(s[i] >30 && s[i] < 47)
            oth++;
    }
    if(smL == 0)
        ans++;
    if (capL == 0)
      ans++;
    if (oth == 0)
      ans++;
    if(digit ==0)
        ans++;

    if(n<=6)
    {
        int k=6-n;
        if(k > ans)
            return k;
        else
            return ans;
    }
    else{
        return ans;
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

