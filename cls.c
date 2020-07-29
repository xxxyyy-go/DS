//
//  cls.c
//  ds
//
//  Created by X on 2020/7/29.
//  Copyright © 2020 X. All rights reserved.
//

#include "cls.h"
#include "stdlib.h"


dllist * initCllist(){
    
    dllist * d=(dllist*)malloc(sizeof(dllist));
    if(d){
         d->rear=d->front=d;
    }else{
        exit(-200);
    }
    return d;
}

void addNode(dllist * d,int element){
    
    dllist * temp=d;
    while (temp->rear!=NULL && temp->front!=temp->rear) {
        temp=temp->rear;
    }
    //创建新的节点
    dllist * node=(dllist*)malloc(sizeof(dllist));
    node->element=element;
    node->front=temp;
    node->rear=NULL;
    temp->rear=node;
}

void showlist(dllist * d){
    
    dllist * temp=d;
    while (temp!=NULL) {
        printf("%d->",temp->element);
        temp=temp->rear;
    }
    return ;

}




