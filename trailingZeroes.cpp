// =====================================================================================
// 
//       Filename:  trailingZeroes.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年01月30日 11时27分20秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>

using std::cout;
using std::endl;

class Solution{
	public:
		int trailingZeroes(int n){
			int countTotal = 0;

			while (n > 0){
				int countFive = n / 5;
				countTotal += countFive;
				n = countFive;
			}

			return countTotal;
		}
};
int main(int argc, char *argv[])
{
	Solution testQuestion;
	cout << testQuestion.trailingZeroes(10) << endl;

	return 0;
}

