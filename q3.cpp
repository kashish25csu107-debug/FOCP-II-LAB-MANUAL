#include<iostream>//conversion of temperature
using namespace std;
int main(){
    int choice;
    float celcius ,fahrenheit;
    cout << "Temperature conversion enu " << endl ;
     cout << "1.celcius to fahrenheit ";
     cout << "2.fahrenheit to celcius";
     cout << "Enter your choice(1 or 2)";
     cin >> choice;
     if(choice == 1){
        cout <<"Enter celcius value:";
        cin >> celcius;
        celcius=(fahrenheit-32)*5/9;
        cout << "Temperature in fahrenheit " << fahrenheit << "°F" << endl;

     }
     else if(choice == 2){
        cout << "Enter value in fahrenheit:";
        cin >> fahrenheit;
        fahrenheit=celcius*(9/5)+32;

      cout << "Temperature in celcius " << celcius << "°C" << endl;

     }
     else{
        cout <<"Invalid choice:";
     }


    return 0;
}
