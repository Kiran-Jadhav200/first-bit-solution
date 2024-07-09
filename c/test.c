
#include <iostream>
using namespace std;

int main(){
    int t;
    // Read the number of test cases
    cin >> t;
    
    // Loop through each test case
    for(int a0 = 0; a0 < t; a0++){
        int n;
        // Read the limit for the current test case
        cin >> n;
        
        int summer = 0; // Initialize the sum for multiples of 3 or 5
        
        // Loop from 1 to n-1 (numbers below n)
        for(int i = 1; i < n; i++){
            // Check if the current number is a multiple of 3 or 5
            if(i % 3 == 0 || i % 5 == 0){
                // Add the number to the sum if it is a multiple of 3 or 5
                summer += i;
            }
        }
        // Print the sum for the current test case
        cout << summer << endl;
    }
    return 0;
}