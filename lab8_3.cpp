#include <iostream>
using namespace std;
int main(){
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height >= 100){
            if(height >= 180){
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 1100000000){
                    cout << "Your character = Zoro\n";
                }else{
                    cout << "Your character = Sanji\n";
                }

            }else{
                cout << "Your character = Usopp\n";
            }
        }else{
            cout << "Your character = Chopper\n";
        }
    }else if(age <=60){
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 500000000){
                    cout << "Your character = Jinbe\n";
            }else {
                    cout << "Your character = Franky\n";
                }
        }else{
            cout << "Your character = Brook\n";
        }
    }
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
