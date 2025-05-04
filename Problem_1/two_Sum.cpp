#include <unordered_map>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            /* Solution: Hashmap Key Search
            *  
            *  Use a hashmap to store values and check if the corresponding opposite value exists. 
            *  Inputs: 
            *   nums (vector<int>&) - A vector of integers containing n number of integers
            *   target (int) - A target value
            * 
            *  Algorithm: 
            *   Iterates through the inputted vector and checks if the current element has a corresponding opposite value in the hashmap.
            *    If the value exists, return the current position and the position of the opposite stored in the hashmap.
            *    Otherwise, store the current value as a key in the hashmap with the current position as the value.
            */
            unordered_map<int,int> map;
    
            for(int i = 0;i < nums.size();i++)
            {
                //Checks for a complement value and will evaluate true if no complement exists
                if(map.find(target - nums[i]) == map.end())  
                    map[nums[i]]=i;
                else
                    //If a complement exists, return the indices of the current number and its complement
                    return {map[target-nums[i]],i};
            }
            return {-1,-1};
        }
    };