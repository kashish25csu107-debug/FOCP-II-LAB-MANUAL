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
    SmartLight ();//default constructor
    
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreseBrightness();
    void  displayStatus();
   
};

SmartLight ::SmartLight ()
{brand ="Unknown";brightness=50;isOn=false;}
    

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
    int main(){

        SmartLight s1("XYZ",98,true);
        s1.increaseBrightness();
        s1.turnOff();
        s1.displayStatus();
        return 0;


    }


