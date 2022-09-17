#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set <int> s; //you can use unordered_multiset if you want to store any int more than once
    //set<int>s ==> arrenges values in asending order
    s.insert(5);
    s.insert(8);
    s.insert(3);
    s.insert(8);
    
    //s.begin() ==>Address of the first element of unordered_set
    //s.end()  ==> Address of last element+one
    //s.end()-1 ==> Address of last element
    
    int a = 2;
    
    if(s.find(a) == s.end()){
        cout<<"Given int is not present"<<endl;
    }
    else{
        cout<<"Yeah I am here"<<endl;
    }
    
    unordered_set <int> :: iterator it;
    
    //s.erase(8);
    
    for(it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    
    
    
}
