#include<iostream>
using namespace std;

int main(){
    
    int num , even = 0 , odd = 0;
    
    while (true){
        
        cout << "Enter an integer: ";
        cin >> num;
        if ((num % 2) == 0){
            if(num == 0){
                
                break;
            }else{
                
                even++;
                
            }
        }else{
            
            odd++;
            
        }
        
    }
    
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd << "\n";
    return 0;
}