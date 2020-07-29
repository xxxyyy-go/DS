//
//  sll.c
//  ds
//
//  Created by X on 2020/7/29.
//  Copyright © 2020 X. All rights reserved.
//

#include "sll.h"
#include "stdlib.h"

//初始化单链表
slist * init(){
    
    slist * s=(slist*)malloc(sizeof(slist));
    s->next=NULL;
    return s;
}

//为单链表写入新元素

void addelement(slist * s,int ele){
    
    slist * temp=s; //创建一个临时存储节点
    while (temp->next!=NULL) {
        temp=temp->next;
    }
    slist * node=(slist*)malloc(sizeof(slist));
    node->element=ele;
    node->next=NULL;
    temp->next=node;
}
//查看单链表中的所有元素
void showelement(slist * s){
    slist * temp=s;
    while (temp!=NULL) {
        printf("%d\n",temp->element);
        temp=temp->next;
    }
}
//
int findelement(slist * s,int ele){
    slist * temp=s;
    while (temp!=NULL) {
        if (temp->element==ele){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void delelement(slist * s,int ele){
    slist * temp=s;
    while (temp->next!=NULL) {
        
        if(temp->element==ele){
            temp->element=temp->next->element;
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
}








