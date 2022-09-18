#include <bits/stdc++.h>

using namespace std;

int main()
{
   unordered_map<int, string>m;
   
   m.insert({3, "Amit"});
   m.insert({4, "pratham"});
   m.insert({5, "atharva"});
   m.insert({10, "dada"});
   
   int search = 4;
   
   if(m.find(4) == m.end()){
       cout<<search<<" is not present"<<endl;
   }
   else{
       cout<<(*m.find(4)).first<<" is present with name is : "<<(*m.find(4)).second<<endl;
       cout<<m.find(4)->first<<" is present with name is : "<<m.find(4)->second<<endl;
   }
}

/*
OUTPUT>>>>
4 is present with name is : pratham
4 is present with name is : pratham

*/
