// =====================================================================================
// 
//       Filename:  convertToTitle.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月02日 17时32分33秒
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

class Solution {
public:
    string convertToTitle(int n) {
		string stringNum = "";

		if (n < 1){
			return stringNum;
		}

		while (n){
			char c = (n - 1) % 26 + 'A';
			stringNum = c + stringNum;
			n = (n - 1) / 26;
		}
		return stringNum;
    }
};
int main(int argc, char *argv[])
{
	Solution testSolution;

	int n = 26;

	cout << testSolution.convertToTitle(n) << endl;


	return 0;
}

