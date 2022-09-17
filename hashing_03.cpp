#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int>s;
    
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    
    
    int search = 6;
    
    if(s.find(search)==s.end()){
        cout<<search<<" is not present "<<endl;
    }
    else{
        cout<<search<<" is present"<<endl;
    }
    
    unordered_set<int> :: iterator it;
    
    for(it = s.begin(); it!= s.end(); it++){
        cout<<*it<<" ";
    }
}
