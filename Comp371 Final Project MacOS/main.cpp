//
//  main.cpp
//  Comp371 Final Project MacOS
//
//  Created by Bruno Robert on 06/11/2018.
//  Copyright © 2018 Bruno Robert. All rights reserved.
//

#include <iostream>
#include "SceneLoader.h"
#include <fstream>

int main(int argc, const char * argv[]) {
    
//    std::fstream outfile;
//    outfile.open("/Users/Bruno/Desktop/test1234.txt", std::fstream::out);//WIN: this path needs to be changed to local windows path
//    outfile << "this is a test" << std::endl;
//    outfile.close();
    
    SceneObj scene("/Users/Bruno/OneDrive - Concordia University - Canada/Documents/Concordia/Fall 2018/Comp 371/Xcode/Comp371 Final Project MacOS/Comp371 Final Project MacOS/Scene_Files/scene1.txt");
    scene.loadScene();
    
    return 0;
}