#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    
    const int MOD = 1e9 + 7;
    int z_end = 0; 
    int o_end = 0;     
    bool f = false; 
    
    for (int i = 0; i < binary.length(); i++){
        char c = binary[i];  
        
        if (c == '0'){
            z_end = (z_end + o_end) % MOD;
            f = true;
        } 
        else{ 
            o_end = (z_end + o_end + 1) % MOD;
        }
        
    }
    
    int res = (z_end + o_end) % MOD;
    if (f) {
        res = (res + 1) % MOD;
    }
    
    cout << res << endl;
    
    return 0;
}