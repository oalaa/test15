#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

// Name:AlaaSaeedTwfeek
// ID:20170056
// The Algorithm detect the anagrams words

using namespace std;

//function sort to sort the word before compare it


string SortStringFunction (string &Str)
{
    sort(Str.begin(), Str.end());

    return Str;
}

// Function ToLower to convert capital letter int small letter


string ToLowerFunction (string &Str)
{
    for (int i=0 ; i<Str.size() ; i++)
    {
        if (Str[i]<92)
        {
            Str[i]+=32;
        }
    }
}

int main()
{
    string Str1, Str2 ;
    string x, y;
    cout << "Enter String1 : " << endl;
    getline (cin,Str1);
    cout << "Enter String2 : " << endl;
    getline(cin,Str2);
    x = ToLowerFunction(Str1);  // call Function to lower to string 1
    y = ToLowerFunction(Str2);  // call function to lower to string 2
    x = SortStringFunction(Str1);  // call function sort to string 1
    y = SortStringFunction(Str2);  // call Function sort to string 2
    if (x == y)    // Compare two strings that equal or not
    {
        cout << "Anagrams" << endl; // if equal so its Anagrams
    }
    else
    {
        cout << "NonAnagrams" << endl; //  if Not Equal so its not Anagrams
    }


    return 0;
}
