#include "procedures.h"
#include <iostream>
void _13(std::pair<int,int> &a,std::pair<int,int> &b,std::pair<int,int> &c,std::pair<int,int> &d,std::pair<int,int> &v){
    a.first+=v.first;a.second+=v.second;
    b.first+=v.first;b.second+=v.second;
    c.first+=v.first;c.second+=v.second;
    d.first+=v.first;d.second+=v.second;
}