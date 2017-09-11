//
//  main.cpp
//  CrackingArray
//
//  Created by Ochulor, Enyinna on 9/11/17.
//  Copyright © 2017 Ochulor, Enyinna. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    //Constraints
    //1 <= n <= 10
    //1 <= d <= n
    //1 <= ai <= 10^6
    
    int n;
    int rotate[6] = {1, 2, 3, 4, 5, 6};
    int d;
    
    for (int x = 0; x < 6; ++x){
        cout << rotate[x] << endl;
    }
    
    
    
    cout << " This is the dynamic array part" << endl;
    
    cout << " Enter the n and d" << endl;
    
    cin >> n;
    cin >> d;
    
    cout << n << endl;
    
    cout << d << endl;
    return 0;
}
