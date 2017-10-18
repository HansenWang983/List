//
//  sequence_list.cpp
//  List
//
//  Created by 16340232 on 2017/10/18.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include "sequence_list.hpp"
#include <iostream>
#include <cctype>
using namespace std;


s_List::s_List(){
    count=0;
}


int s_List::size()const{
    return count;
}


bool s_List::full()const{
    return count==max_list;
}


bool s_List::empty()const{
    return count==0;
}


void s_List::clear(){
    count=0;
}


Error_code s_List::insert(int position,const char &x){
    if(!isalpha(x))
        return fail;
    if(full())
        return fail;
    if(position<0||position>count)
        return fail;
    for(int i=count-1;i>=position;i--){
        entry[i+1]=entry[i];
    }
    entry[position]=x;
    count++;
    return success;
}



Error_code s_List::remove(int position,char &x){
    if(empty())
        return  fail;
    if(position<0||position>count-1)
        return fail;
    x=entry[position];
    count--;
    while(position<count){
        entry[position]=entry[position+1];
        position++;
    }
    return success;
}


void s_List::traverse()const{
    for(int i=0;i<count;i++)
        cout<<entry[i]<<" ";
    cout<<endl;
}
