//
//  main.cpp
//  LinkedListBinInt
//
//  Created by Bryant Sahota on 12/15/19.
//  Copyright © 2019 Bryant Sahota. All rights reserved.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        while(head->next != nullptr)
        {
            std::cout << head->val << std::endl;
        }
        return -666;
    }
};


