#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void decision()
{
    int a,b,c,max;
    cout << "Enter the numbers: " << endl;
    cin >> a >> b >> c;
    if(a > b)
    {
        if(a > c)  max = a;
        else    max = c; 
    }
    else
    {
        if(b > c) max = b;
        else    max = c;
    }
    cout << max << endl;
}

void switchCase()
{
    int ch;
    cout << "Enter the choice: " << endl;
    cin >> ch;
    switch(ch)
    {
        case 1:
            cout << "1 is selected" << endl;
            break;
        case 2: 
            cout << "2 is selected" << endl;
            break;
        default:
            cout << "Neither were selected" << endl;
    }
}

void strings()
{
    string s = "hello";
    for(int i = 0; i < s.length(); i++)
    {
        s[i]++;
    }
    cout << s << endl;
    s = "say";
    s.pop_back();
    s.push_back('t');
    cout << s << endl;
    for(auto a = s.rbegin(); a < s.rend(); a++)
    {
        cout << *a;
    }
    reverse(s.begin(), s.end());
    cout << endl;
    cout << s;
    cout << endl;
    s = "the quick brown fox jumped over the lazy dog";
    cout << s.find("the") << endl;
    cout << s.rfind("the") << endl;
    string str1 = "Let us learn C language";
    string str2 = "C++";
    cout << "The string before replacement is: "<<str1<<'\n';
    str1.replace(13,1,str2);      //13 => 13th index, 1 => 1 char(s) from 13th (inclusive) replace with str2
    cout << "The string after replacement is: "<<str1<<'\n';
}

void loops()
{
    int arr[5];
    //for loop
    for(int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    cout << endl;
    int i = 0;

    //while loop
    while(i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;

    //do while loop
    do
    {
        cout << i << " ";
        i--;
    } while (i > 0);
    cout << endl;

    //for each loop
    for(int a: arr)
    {
        cout << a << "  ";
    }
}

int basicFun(int a)
{
    return a+5;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void refSwap(int& a, int& b)
{
    int temp = a;
    a = b; 
    b = temp;
}

int main()
{
    // decision();
    // switchCase();
    strings();
    // loops();
    // cout << basicFun(5) << endl;
    // int x = 5, y = 6;
    // cout << "Initial Vals: x = " << x << " y = " << y << endl;
    // swap(x,y);
    // cout << "First Swapped Vals: x = " << x << " y = " << y << endl;
    // refSwap(x,y);
    // cout << "Second Swapped Vals: x = " << x << " y = " << y << endl;
    // return 0;
}


