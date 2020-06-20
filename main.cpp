//
//  main.cpp
//  ReverseInteger
//
//  Created by Bryant Sahota on 12/12/19.
//  Copyright © 2019 Bryant Sahota. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    int reverse(int x) {
        //negative check
        bool isNegative = false;
        std::stack<int>fNumStack;
        //Place numbers into stack to reverse
        while(x != 0)
        {
            if(x < 0)
            {
                isNegative = true;
                fNumStack.push((x%10)*(-1));
                x = (x/10)*(-1);
            }
            //Place each number into stack
            fNumStack.push(x%10);
            x = x/10;
        }
        //Reverse the stack
        std::stack<int>rNumStack;
        while(fNumStack.size() > 0)
        {
            rNumStack.push(fNumStack.top());
            fNumStack.pop();
        }
        //string for reverse integer
        std::string strReverse;
        //Turn the stack into a string
        while(rNumStack.size() > 0)
        {
            strReverse += std::to_string(rNumStack.top());
            rNumStack.pop();
        }
        std::cout << strReverse << std::endl;
        //turn the string back into an int that has been reversed
        int reverseInt = stoi(strReverse);
        if(isNegative == true)
        {
            reverseInt = reverseInt*(-1);
        }
        return reverseInt;
    }
};

int main()
{
    Solution s;
    int number = 12340;
    std::cout << number << std::endl;
    std::cout << s.reverse(number) << std::endl;
}
