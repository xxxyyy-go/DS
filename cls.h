//
//  cls.h
//  ds
//
//  Created by X on 2020/7/29.
//  Copyright © 2020 X. All rights reserved.
//

#ifndef cls_h

#define cls_h

#include <stdio.h>
typedef struct Dllist{
    struct Dllist * front;
    int element;
    struct Dllist *rear;
    
}dllist;
//初始化双链表
dllist * initCllist();
//新增节点
void addNode(dllist * d,int element);
//在指定节点新增节点
void addDestNode(dllist * d,int element,int dest);
//删除指定节点
void delNode(dllist *d,int element);
//查找指定节点
int findNode(dllist *d,int element);
//展示
void showlist(dllist *d);
#endif /* cls_h */
