//
//  main.cpp
//  twoSum
//
//  Created by Bryant Sahota on 12/9/19.
//  Copyright © 2019 Bryant Sahota. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> solution;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                }
            }
        }
        if(solution.size() == 0)
        {
            solution.push_back(666);
            solution.push_back(-666);
        }
        return solution;
    }
};


int main()
{
    std::vector<int> nums = {13, 2, 7, 5};
    int target = 9;
    Solution s;
    std::vector<int> sol = s.twoSum(nums, target);
    std::cout << sol[0] << std::endl;
    std::cout << sol[1] << std::endl;
}

