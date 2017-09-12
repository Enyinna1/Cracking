//
//  main.cpp
//  CrackingArray
//
//  Created by Ochulor, Enyinna on 9/11/17.
//  Copyright © 2017 Ochulor, Enyinna. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    //Constraints
    //1 <= n <= 10
    //1 <= d <= n
    //1 <= ai <= 10^6
    
    int n;
    int d;
    string line1, line2, n1, d1;
    vector<int>myArray;
    
    
    
    cout << " This is the dynamic array part" << endl;
    
    cout << " Enter the n and d" << endl;
    
    getline(cin, line1);
    istringstream iss(line1);
    iss >> n;
    iss >> d;
    cout << n << " " << d << endl;
    int rotate[n];
    
    cout << " Enter array elements " << endl;
    getline(cin, line2);
    istringstream iss1(line2);
        for(int result1 = 0; result1 < n; result1++){
            iss1 >> rotate[result1];
            cout << rotate[result1] << " ";
    }
    cout << endl;
    int holdingArray[d];
    int counter = 0;
    int iter = 0;
    
    for(int x = 0; x < d; ++x){
        
        holdingArray[x] = rotate[x];
    }

    for(int z = 0; z < n; ++z) {
        if(d >= n){
            rotate[iter] = holdingArray[counter];
            ++iter;
            ++counter;
        }
        else{
            rotate[iter] = rotate[d];
            ++iter;
            ++d;
        }
 
    }
    
    for(int y = 0; y < n; ++y){
        
        cout << rotate[y] << " ";
    }
    return 0;
}
