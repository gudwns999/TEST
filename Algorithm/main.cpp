//
//  main.cpp
//  Algorithm
//
//  Created by HyungJun Kim on 2017. 2. 20..
//  Copyright © 2017년 HyungJun Kim. All rights reserved.
//


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cout<<"10진수 입력: ";
    cin>>num;
    //std:hex 입력받은 10진수를 16진수로 출력
    cout<< std::hex << num<<endl;
    return 0;
}
