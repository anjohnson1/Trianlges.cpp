//
//  triangles.cpp
//  
//
//  Created by ashley on 12/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    int integer, star, spaces, i;
    
    cout << "Please enter a number: ";
    cin >> integer;
    cout << endl << endl;
    
    if (integer < 0)
        integer *= -1;
    if ((integer % 2) == 0)
        integer++;
    
    star = integer;
    spaces = 0;
    
    while (star >= 1) {
        if (spaces != 0) 
            for (i = 0; i < spaces; i++) { cout << " "; }
        for (i = 0; i < star; i++) { cout << "*"; }
        cout << endl;
        star -= 2;
        spaces ++;
    }
    
    star = 3;
    spaces -= 2;

    while (star <= integer) {
        if (spaces != 0) 
            for (i = 0; i < spaces; i++) { cout << " "; }
        for (i = 0; i < star; i++) { cout << "*"; }
        cout << endl;
        star += 2;
        spaces --;
    }
    
    return 0;
}