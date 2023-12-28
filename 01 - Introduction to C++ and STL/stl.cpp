#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;

void vec()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator itn = v.end();
    cout << *(itn-1) << endl;
    vector<int>::reverse_iterator it = v.rbegin();
    cout << *(it) << endl;
    for(int i: v)
    {
        cout << i;
    }
    cout << endl;
    for(vector<int>::reverse_iterator i = v.rbegin(); i < v.rend(); i++)
    {
        cout << *i;
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++)
    cout << v[i];
    cout << endl;

    auto i = find(v.begin(), v.end(), 2);
    cout << i-v.begin();
    cout << "\n" << endl;
    vector<int> v2(10,5);
    for(auto i: v2) cout << i;
    vector<int> v3 = {6,4,2,7,3,1,6,4,0};
    sort(v3.begin(),v3.end(),greater<int>());
    cout << endl;
    for(auto i: v3) cout << i;
    cout << endl;
    v3.insert(v3.begin()+4,9);
    for(auto i: v3) cout << i;
    v3.erase(v3.begin()+2,v3.end()-1);
    cout << endl;
    for(auto i: v3) cout << i;
}

void showPair()
{
    pair<int,int> p;
    p.first = 1; p.second = 2;
    cout << p.first << " " << p.second << endl;
    vector<pair<int,int>> v;
    v.push_back(p);
    v.push_back({3,4});
    v.push_back({5,6});
    cout << endl;
    for(auto i: v)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "\n" << st.top() << endl;
    st.pop();
    //also st.size() and st.empty()
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    // q.front() is the first element and q.back() is the last element
    q.pop();    // pop the first element because FIFO
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
}

void explainList()
{
    list<int> ls = {1,2,3,4,5};
    ls.push_back(6);    //or emplace
    ls.push_front(0);   //or emplace
    cout << endl;   //doubly linked list to reduced time complexity when compared to insert in vector
    for(int i : ls)
    cout << i;
    cout << endl;
    cout << "Front: " << ls.front() << "\nBack: " << ls.back() << endl; 
    //rest similar to vectors
}   

int main()
{
    // explainStack();
    explainQueue();
    // explainList();
    // vec();
    // showPair();
    return 0;
}