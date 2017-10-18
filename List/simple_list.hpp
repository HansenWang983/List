//
//  simple_list.hpp
//  Simple Linked Lists
//
//  Created by hansen on 2017/10/1.
//
//

#ifndef simple_list_hpp
#define simple_list_hpp


enum Error_code{success,fail};


struct Node {
    int entry;
    Node* next;
    Node();
    Node(int ele,Node* link = nullptr):entry(ele),next(link){}
};


class List{
public:
    List();
    
    ~List();
    
//    List(const List<List_entry> &copy);
    
//    void operator=(const List<List_entry> &copy);
    
    Error_code insert(int position,const int &x);

    Error_code remove(int position,int &x);
    
    void traverse()const;

    int size()const;

    void clear();

    bool empty()const;
    
private:
    int count;
    Node* head;
    Node* set_position(int position)const;
    
};
#endif /* simple_list_hpp */
