//
//  simple_list.cpp
//  Simple Linked Lists
//
//  Created by hansen on 2017/10/1.
//
//

#include "simple_list.hpp"
#include <iostream>
using namespace std;

Node::Node()
{
    next=nullptr;
}


List::List()
{
    count=0;
    head=nullptr;
}


List::~List()
{
    clear();
}


void List::clear()
{
    Node *p, *q; 
    for (p = head; p; p = q){ 
        q = p->next; 
        delete p;
    }
    count=0;
    head=nullptr;
}


int List::size()const
{
    return count;
}


bool List::empty()const
{
    return count==0;
}

Error_code List::remove(int position,int &x){

    Node *pre,*cur;
    if(count==0)
        return fail;
    if(position<0||position>count)
        return fail;
    if(position>0){
        pre=set_position(position-1);
        cur=pre->next;
        pre->next=cur->next;
    }
    else{
        cur=head;
        head=cur->next;
    }
    x=cur->entry;
    delete cur;
    cur=nullptr;
    count--;
    return success;


}



Node* List::set_position(int position)const
{
    Node* q = head;
    for (int i = 0; i < position; i++) q = q->next;
    return q;
}


Error_code List::insert(int position, const int &x)
{
    if (position < 0 || position > count)
        return fail;
    Node* new_node, * previous, * following;
    if (position > 0) {
        previous = set_position(position - 1);
        following = previous->next;
    }
    else following = head;
    new_node = new Node(x, following);
    if (new_node == nullptr)
        return fail;
    if (position == 0)
        head = new_node;
    else{
        previous->next = new_node;
    }
    count++;
    return success;
}

void List::traverse()const{
    Node* tem=head;
    while(tem){
        cout<<tem->entry<<" ";
        tem=tem->next;
    }
    cout<<endl;
}








