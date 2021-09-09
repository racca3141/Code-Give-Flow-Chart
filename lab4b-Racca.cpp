// Emerson Racca
// 09/08/2021
// Lab 4b: Code Given Flow Chart

// Convert the attached flow chart to a c++ program.

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    cout << "Car Buying Guide for the Average Male\n\n";
     
    int age;
    cout << "What is your age? ";
    cin >> age;
    
    if(age < 40){
        
        cout << "\nLife Stage 1\n";
        
        if (age < 25)
            cout << "Buy a Ford Focus.";
        else
            cout << "Buy a minivan.";
            
    }else{
        
        cout << "\nLife Stage 2\n";
        
        if (age < 55)
            cout << "Buy a Corvette.";
        else
            cout << "Buy a Lincoln Town Car.";
            
    }
  
    return 0;
  
}
