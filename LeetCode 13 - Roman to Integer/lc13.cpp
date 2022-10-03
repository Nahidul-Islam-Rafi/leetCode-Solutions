/* LeetCode 13 Roman to Integer by RafiCodes*/

/*
Explanations Given After The Codes.
Try to Understand the program through the codes first
Then if you need further explanation go to the written explanation
*/
#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int res = 0;
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        switch (s[i])
        {
        case 'I':
            res += 1;
            break;
        case 'V':
            if (i != 0 && s[i - 1] == 'I')
            {
                res += 4;
                i--;
            }
            else
            {
                res += 5;
            }
            break;
        case 'X':
            if (i != 0 && s[i - 1] == 'I')
            {
                res += 9;
                i--;
            }
            else
            {
                res += 10;
            }
            break;
        case 'L':
            if (i != 0 && s[i - 1] == 'X')
            {
                res += 40;
                i--;
            }
            else
            {
                res += 50;
            }
            break;
        case 'C':
            if (i != 0 && s[i - 1] == 'X')
            {
                res += 90;
                i--;
            }
            else
            {
                res += 100;
            }
            break;
        case 'D':
            if (i != 0 && s[i - 1] == 'C')
            {
                res += 400;
                i--;
            }
            else
            {
                res += 500;
            }
            break;
        case 'M':
            if (i != 0 && s[i - 1] == 'C')
            {
                res += 900;
                i--;
            }
            else
            {
                res += 1000;
            }
            break;
        default:
            break;
        }
    }
    return res;
}
int main()
{
    string romanNumber;
    cin >> romanNumber;
    int intNumber = romanToInt(romanNumber);
    cout << intNumber;
}

/* Time Complexity O(n) */
/* Explanation:
Create a variable to store the result and initialize it with 0.
Traverse the string backwards and check every character,
if the character is 'I', simply add 1 to result variable.
if the character is 'V',
    then if it is not the first character of the string and if the character before it is 'I'
        then add 4 to the result.
    else add 5 to the result.
if the character is 'X',
    then if it is not the first character of the string and if the character before it is 'I'
        then add 9 to the result.
    else add 10 to the result.
if the character is 'L',
    then if it is not the first character of the string and if the character before it is 'X'
        then add 40 to the result.
    else add 50 to the result.
if the character is 'C',
    then if it is not the first character of the string and if the character before it is 'X'
        then add 90 to the result.
    else add 100 to the result.
if the character is 'D',
    then if it is not the first character of the string and if the character before it is 'C'
        then add 400 to the result.
    else add 500 to the result.
if the character is 'D',
    then if it is not the first character of the string and if the character before it is 'C'
        then add 900 to the result.
    else add 1000 to the result.

Fore more elaborate explanation check out this video:

Also, check out my channel to learn more about coding and problem solving:
 */