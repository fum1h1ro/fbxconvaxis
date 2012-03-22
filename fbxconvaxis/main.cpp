//
//  main.cpp
//  fbxconvaxis
//
//  Created by Kanaya Fumihiro on 12/03/21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "fbxsdk.h"


int main(int argc, const char * argv[]) {
    KFbxSdkManager* mgr = KFbxSdkManager::Create();

    printf("HOGE");
    printf("%x", (unsigned long long)mgr);
    
    
    
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

