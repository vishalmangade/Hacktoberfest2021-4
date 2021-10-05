"""
Given an integer nums, return the first nums of Pascal's triangle.

Example 1:

    Input: nums = 5
    Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Constraints:

    1 <= nums <= 30
"""

class Solution:
    def generate(self, nums):
        result = [[1]]
        if nums == 1:
            return result
        result.append([1,1])
        for i in range(2, nums):
            temp = [1]*(i+1)
            for j in range(1, len(temp) - 1):
                temp[j] = result[i-1][j-1] + result[i-1][j]
            result.append(temp)
            
        return result

# main block
if __name__ == "__main__":
    numsInput = int(input())   # takes the whole line of n numbers
    resultArr = Solution().generate(numsInput)
    print(resultArr)