//
//  main.cpp
//  List
//
//  Created by 16340232 on 2017/10/18.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include "sequence_list.hpp"
#include "linked_list.hpp"
#include <iostream>
#include <cctype>
using namespace std;

void sequence_implementation(){
    s_List list;
    char c;
    cout<<"input your choice\n"
        <<"1:insert         \n"
        <<"q:quit           \n";
    cin>>c;
    int count=0;
    int pos=0;
    char e=0;
    while(c!='q'){
    switch(c){
        case '1':
            cout<<"Input the number of entry you want to insert\n";
            cout<<"The max_list is 10\n";
            cin>>count;
            while(count>10){
                cout<<"Input again\n";
                cin>>count;
            }
            for(int i=0;i<count;i++){
                cout<<"Input the position and the entry you want to insert\n";
                cout<<"The entry must be a letter between a to z or A to Z!!!\n";
                cin>>pos>>e;
                while(list.insert(pos,e)!=success){
                    cout<<"Attention to your position value or entry type\n";
                    cout<<"Please input again\n";
                    cin>>pos>>e;
                }
                cout<<"You have done\n";
                cout<<"The list is:";
                list.traverse();
            }
            break;
        case '2':
            cout<<"Input the number of entry you want to remove\n";
            cin>>count;
            char entry;
            while(count>list.size()){
                cout<<"the number is bigger than the size of list,please input again\n";
                cin>>count;
            }
            for(int i=0;i<count;i++){
                cout<<"Input the position you want to remove\n";
                cin>>pos;
                while(list.remove(pos,entry)!=success){
                    cout<<"Attention to your position value\n";
                    cout<<"Please input again\n";
                    cin>>pos;
                }
                cout<<"You have deleted "<<entry<<endl;
                cout<<"The list is : ";
                list.traverse();
            }
            if(list.size()==0)
                list.clear();
            break;
        case 'q':
            return;
        default:
            break;
    }
    cout<<"input your choice\n"
        <<"1:insert         \n";
        
    if(list.size()!=0)
        cout<<"2:remove         \n";
        
    cout<<"q:quit           \n";

    cin>>c;
    }
    return;
}

void linked_implementation(){
    
    l_List list;
    char c;
    cout<<"input your choice\n"
        <<"1:insert         \n"
        <<"q:quit           \n";
    cin>>c;
    int count=0;
    int pos=0;
    char e=0;
    while(c!='q'){
    switch(c){
        case '1':
            cout<<"Input the number of entry you want to insert\n";
            cin>>count;
            for(int i=0;i<count;i++){
                cout<<"Input the position and the entry you want to insert\n";
                cout<<"The entry must be a letter between a to z or A to Z!!!\n";
                cin>>pos>>e;
                while(list.insert(pos,e)!=success){
                    cout<<"Attention to your position value or entry type\n";
                    cout<<"Please input again\n";
                    cin>>pos>>e;
                }
                cout<<"You have done\n";
                cout<<"The list is:";
                list.traverse();
            }
            break;
        case '2':
            cout<<"Input the number of entry you want to remove\n";
            cin>>count;
            char entry;
            while(count>list.size()){
                cout<<"the number is bigger than the size of list,please input again\n";
                cin>>count;
            }
            for(int i=0;i<count;i++){
                cout<<"Input the position you want to remove\n";
                cin>>pos;
                while(list.remove(pos,entry)!=success){
                    cout<<"Attention to your position value\n";
                    cout<<"Please input again\n";
                    cin>>pos;
                }
                cout<<"You have deleted "<<entry<<endl;
                cout<<"The list is : ";
                list.traverse();
            }
            if(list.size()==0)
                list.clear();
            break;
        case 'q':
            return;
        default:
            break;
    }
    cout<<"input your choice\n"
    <<"1:insert         \n";
        
    if(list.size()!=0)
        cout<<"2:remove         \n";
        
    cout<<"q:quit           \n";

    cin>>c;
    }
}


int main()
{
    char choice;
    cout<<"input your choice\n"
        <<"1:create a sequence list\n"
        <<"2:create a linked   list\n";
    cin>>choice;
    switch(choice){
            case '1':
                sequence_implementation();
                break;
            case '2':
                linked_implementation();
                break;
            default:
                break;
    }
    return 0;
}
