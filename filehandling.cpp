#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // by default ios::out
    ofstream fout("C:/Users/DELL/Desktop/FOCP 2 Lab Manual/kash.txt");
    if(!fout){
        cout << "Error opening file!";
        return 1;
    }
    fout << "\n Kashish \n she is a very innocent girl. \n";
    fout << "she is very pretty";

    fout .close();
    cout << "Data written succesfully";
    return 0;
}