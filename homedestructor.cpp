#include<iostream>
using namespace std;
class SmartLight 
{
private:
    string brand;
    int brightness;
    bool isOn;
public:
    SmartLight (string brand, int brightness ,bool isOn);//parameterized constructor
   SmartLight ();//default destructor
    
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreseBrightness();
    void  displayStatus();
    ~SmartLight() {cout<< "\nObject destroyed";};
   
};

SmartLight::SmartLight()
{cout <<"\n Default"; brand ="Unknown";brightness=50;isOn=false;}
    

SmartLight ::SmartLight (string b,int br,bool s)
{brand =b;brightness =br;isOn=s;}
    void SmartLight::turnOn(){
        isOn=true;
    }
    void SmartLight::turnOff(){
        isOn =false;
    }
    void SmartLight::increaseBrightness(){
        if(brightness+10>100)
        brightness=100;
        else
        brightness+=10;
    }
    void SmartLight::decreseBrightness(){
        if(brightness-10<0)
        brightness=0;
        else
        brightness=10;
    }
    void SmartLight::displayStatus(){
        cout << "\nBrand :" << brand;
        cout << "\n Brightness :" << brightness;
        if(isOn==true)
        cout << "\n isOn :ON";
        else
        cout << "\n isOff :OFF";
    }
    SmartLight s2;
    int main(){

      
        { cout<<"inside block";  SmartLight s1("XYZ",98,true);}
        s2.increaseBrightness();
        s2.turnOff();
        s2.displayStatus();
        return 0;


    }


