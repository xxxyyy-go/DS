//
//  sll.h
//  ds
//
//  Created by X on 2020/7/29.
//  Copyright © 2020 X. All rights reserved.
//

#ifndef sll_h
#define sll_h
#include <stdio.h>
//声明单链表结构
typedef struct Slist{
    int element; //节点元素
    struct Slist * next; //下一个节点指针
    
}slist;
slist * init();//初始化单链表
void addelement(slist * s,int ele); //添加新节点
void showelement(slist * s);//展示所有节点
void delelement(slist * s,int ele);//删除指定参数节点
int findelement(slist * s,int ele);//查找指定参数
#endif /* sll_h */
