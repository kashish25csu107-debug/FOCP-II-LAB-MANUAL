#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    ifstream fin("kash.txt");
    string line;
    if(!fin.is_open()){
        cout<<"\n issue with file,can't read";
        return 0;
    }
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}