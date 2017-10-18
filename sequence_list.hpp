//
//  sequence_list.hpp
//  List
//
//  Created by 16340232 on 2017/10/18.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef sequence_list_hpp
#define sequence_list_hpp
#define max_list 10

enum Error_code{success,fail};


class s_List{
public:
    s_List();
    int size()const;
    bool full()const;
    bool empty()const;
    void clear();
    
    Error_code insert(int position,const char &x);
    
    Error_code remove(int position,char &x);
    
    void traverse()const;
    
private:
    int count;
    
    char entry[max_list];
    
    
};



#endif /* sequence_list_hpp */
