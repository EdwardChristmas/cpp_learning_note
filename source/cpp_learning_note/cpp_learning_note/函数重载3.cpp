//
//  函数重载3.cpp
//  cpp_learning_note
//
//  Created by Hex Christmas on 2021/9/7.
//

#include <iostream>
using namespace std;


void display(double a){
    cout << "display(double) - " << a << endl;
}

void display(long a){
    cout << "display(long) - " << a << endl;
}

int main(){
    display(10);
    
}
