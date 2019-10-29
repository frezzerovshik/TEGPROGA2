//
//  Second_task.cpp
//  TEHPROGA2
//
//  Created by Артем Шарапов on 29.10.2019.
//  Copyright © 2019 Артем Шарапов. All rights reserved.
//

#include "Second_task.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool process(const char* _string){
    bool flag = true;
    int i = 0;
    while(_string[i]!='\0'){
        if(_string[i++] == ',')
            flag = false;
    }
    return flag;
}
int second_task(){
    ifstream input("/Users/frez2zerovshik/Documents/Универ/Третий курс/Проекты xCode/TEHPROGA2/TEHPROGA2/input.txt");
    string tmp;
    bool flag;
    const char* str;
    if(!input.is_open()){
        cout<<"Файл не открылся"<<endl;
        return 1;
    }
    while(!input.eof()){
        getline(input,tmp);
        str = tmp.c_str();
        flag = process(str);
        if(flag == true)
            cout<<tmp<<endl;
    }
    return 0;
}
