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
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution{
	public:
		int titleToNumber(string s){
			int ret = 0;

			for (int i = 0; i < s.size(); i++){
				ret = ret * 26 + (s[i] - 'A' + 1);
			}

			return ret;
		}
};
int main(int argc, char *argv[])
{
	Solution testSolution;

	cout << testSolution.titleToNumber("AA") << endl;

	return 0;
}

