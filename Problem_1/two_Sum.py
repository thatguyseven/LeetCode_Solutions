
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        num_pos = dict()
        current_pos = 0
        for i in nums:
            # Checks if a value exists in the dict.
            # If the value does exist, return the
            if (target-i) in num_pos:
                return [num_pos[target-i], current_pos]
            # Otherwise, save the current value, position pair in the dictionary
            else:
                num_pos[i] = current_pos
            current_pos+=1
        return [-1,-1]
