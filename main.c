//
//  main.c
//  ds
//
//  Created by X on 2020/7/29.
//  Copyright © 2020 X. All rights reserved.
//

#include <stdio.h>
#include "sll.h"
#include "cls.h"

int main(int argc, const char * argv[]) {
    //单链表
    slist * s=init();
    addelement(s, 1);
    addelement(s, 2);
    addelement(s, 3);
    addelement(s, 4);
    showelement(s);
    delelement(s, 1);
    delelement(s, 2);
    showelement(s);
    //双链表
    dllist * d=initCllist();
    addNode(d, 12);
    addNode(d, 13);
    addNode(d, 14);
    showlist(d);
    return 0;
}
