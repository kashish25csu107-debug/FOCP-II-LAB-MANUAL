#include<iostream>
using namespace std;
int main(){
    int player;
    int score1 ,score2 ,score3;
    cout << "Enter score1" << endl;
    cin >> score1;
    cout << "Enter score2" << endl;
    cin >> score2;
    cout << "Enter score3" << endl;
    cin >> score3;
    if(score1 >score2 && score1 >score3)
    {
        cout << "Player 1 is winner" << endl;

    }
    else if(score2 > score1 && score2 > score3){
        cout << "Player 2 is winner" << endl;
    }
    else{
        cout << "Player 3 is winner";
    }
    return 0;

}