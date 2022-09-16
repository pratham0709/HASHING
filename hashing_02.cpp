#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> s;
    
    s.insert(8); // s = {8}
    s.insert(3); // s = {8,3}
    s.insert(1); // s = {8,3,1}
    s.insert(3); // s = {8,3,1}
    
    // s.begin() ==> address of first element
    // s.end() ==> address of last+1 element address ===> don't exist
    // s.end()-1 ==> address of last index
    
    s.erase(3);

    for(auto it = s.begin(); it!= s.end(); it++){
       cout<<*it<<" ";
   }
}
