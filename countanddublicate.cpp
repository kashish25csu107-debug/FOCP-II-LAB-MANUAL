#include <iostream> 
#include <set> 
using namespace std;
 int main() { 
    set<int> s; 
    s.insert(5); 
    s.insert(5); 
    s.insert(5); 
    cout << "Count of 5: " << s.count(5) << endl;
     cout << "Size: " << s.size() << endl;
 } 