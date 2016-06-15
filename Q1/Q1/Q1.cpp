// Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <map>

using namespace std;

int main()
{
	class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			map<int, int> index;
			for (int i = 0; i<nums.size(); i++) {
				int j = nums[i];
				if (index.find(target - j) != index.end()) {
					return vector<int> {index[target - j], i};
				}
				index[j] = i;
			}

			return vector<int>();
		}
	};
	
	return 0;
}

