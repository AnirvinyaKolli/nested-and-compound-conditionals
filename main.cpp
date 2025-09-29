/* 
Sai Anirvinya Kolli
9/29/25
Nested and compund conditionals lab 
*/

#include <iostream>
#include <string>
using namespace std; 
// Method for smart therm 
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

// Method for password validation 
string passwordValidator(string username, string password){
    return (username == "admin" && password == "1234") ? "Access granted." : "Access denied."; 
}

//Method for arcade free pass
string arcadeFreePassValidator(bool isTuesday, int age){
    return (isTuesday || age <= 12 ) ? "Free pass!" : "Sorry you have to pay.";
}


int main(){

    //Get input 
    int temp;
    cout << "Smart thermometer!: Enter temprature" << "\n"; 
    cin >>  temp; 
    bool isHome = true; 
    
    //output 
    cout << smartThermometer(isHome, temp)  << "\n"; 

    //Get input 
    string username;
    string password; 
    cin.ignore();  
    cout<< "Enter username: "  << "\n";
    getline(cin, username);
    cout << "Enter password: "  << "\n"; 
    getline(cin, password);

    //output 
    cout <<  passwordValidator(username, password)  << "\n"; 

    //Get input 
    int age; 
    cout << "Enter age to see if you are elligble for free entry: "  << "\n";
    cin >> age; 
    bool isTuesday = false; 

    //output 
    cout << arcadeFreePassValidator(isTuesday, age)  << "\n"; 
}