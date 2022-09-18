#include <bits/stdc++.h>

using namespace std;

int main()
{
   unordered_map<string, string>m;
   
   m.insert({"3", "Amit"});
   m.insert({"4", "pratham"});
   m.insert({"5", "atharva"});
   m.insert({"10", "dada"});
   
   string search = "3";
   
   if(m.find(search) == m.end()){
       cout<<search<<" is not present"<<endl;
   }
   else{
       cout<<(*m.find(search)).first<<" is present with name is : "<<(*m.find(search)).second<<endl;
       cout<<m.find(search)->first<<" is present with name is : "<<m.find(search)->second<<endl;
   }
}

/*
3 is present with name is : Amit
3 is present with name is : Amit

*/
