//
//  simple_l_List.hpp
//  Simple Linked Lists
//
//  Created by hansen on 2017/10/1.
//
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include "sequence_list.hpp"


struct Node {
    char entry;
    Node* next;
    Node();
    Node(int ele,Node* link = nullptr):entry(ele),next(link){}
};


class l_List{
public:
    l_List();
    
    ~l_List();
    
//    l_List(const l_List<l_List_entry> &copy);
    
//    void operator=(const l_List<l_List_entry> &copy);
    
    Error_code insert(int position,const char &x);

    Error_code remove(int position,char &x);
    
    void traverse()const;

    int size()const;

    void clear();

    bool empty()const;
    
private:
    int count;
    Node* head;
    Node* set_position(int position)const;
    
};
#endif /* simple_l_List_hpp */
