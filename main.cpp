/* 
Sai Anirvinya Kolli
9/29/25
Nested and compund conditionals lab 
*/

#include <iostream>
#include <string>
using namespace std; 

string smartThermometer(bool isHome, int temp){
    if(!isHome){
        return "System idle; No one is home.";
    }else{
        if (temp > 75){
            return "Activating cooling system.";
        } else if (temp < 65) {
            return "Activating heating system.";
        } else {
            return "Temprature is stable. On standby.";
        }
    }
    return ""; 
}

string passwordValidator(string username, string password){
    return (username == "admin" && password == "1234") ? "Access granted." : "Access denied."; 
} 

string arcadeFreePassValidator(bool isTuesday, int age){
    return (isTuesday || age <= 12 ) ? "Free pass!" : "Sorry you have to pay.";
}

int main(){
    int temp;
    cout << "Smart thermometer!: Enter temprature" << "\n"; 
    cin >>  temp; 
    bool isHome = true; 
    cout << smartThermometer(isHome, temp)  << "\n"; 

    string username;
    string password; 
    cin.ignore();  
    cout<< "Enter username: "  << "\n";
    getline(cin, username);
    cout << "Enter password: "  << "\n"; 
    getline(cin, password);
    cout <<  passwordValidator(username, password)  << "\n"; 

    int age; 
    cout << "Enter age to see if you are elligble for free entry: "  << "\n";
    cin >> age; 
    bool isTuesday = false; 
    cout << arcadeFreePassValidator(isTuesday, age)  << "\n"; 
}