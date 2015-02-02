// =====================================================================================
// 
//       Filename:  majorityElement.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月02日 11时17分07秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
	public:
		int majorityElement(vector<int> &num) {
       	int element = 0;
	   	int countNum = 0;

	   	for (int i = 0; i < num.size(); i++){
			if (countNum == 0){
				element = num[i];
				countNum = 1;
			}
			else{
				if (element == num[i]){
					countNum++;
				}
				else{
					countNum--;
				}
			}

		}
		return element;
    }
};

int main(int argc, char *argv[])
{
	Solution testSolutin;
	int a[3] = {3,3,4};
	vector <int> number(a, a + 3);

	cout << testSolutin.majorityElement(number) << endl;

	return 0;
}

