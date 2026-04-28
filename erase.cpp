#include <iostream>
 #include <set>
  using namespace std; 
  int main() { 
    set<int> s; 
    
    s.insert(10);
     s.insert(20);
     s.insert(30);
      if(s.find(20) != s.end()) cout << "Found\n";
       s.erase(20); 
       for(int x : s) cout << x << " ";
 } 