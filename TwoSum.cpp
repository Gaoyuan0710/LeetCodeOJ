// =====================================================================================
// 
//       Filename:  TwoSum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年01月28日 22时03分52秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>
#include <vector>
#include <map>

using std::endl;
using std::cout;
using std::vector;
using std::map;

class Solution{
	public:
		vector <int> twoSum(vector<int> &numbers, int target){
			vector <int> result;
			map<int, int> numberMap;

			for (vector<int>::size_type i = 0; i < numbers.size(); i++){
				map<int, int>::iterator iter = numberMap.find(target - numbers[i]);

				cout << numbers[i] << endl;

				if (iter != numberMap.end()){
					result.push_back(iter->second);
					result.push_back(i + 1);
				}
				else{
					numberMap[numbers[i]] = i + 1;
				}
			}
		return result;
		}
};
int main(int argc, char *argv[])
{
	Solution testOJ;

	int array[4] = {2, 7, 11, 15};

	vector <int> number(array, array + 4);
	vector <int> result (testOJ.twoSum(number, 9));


	return 0;
}

