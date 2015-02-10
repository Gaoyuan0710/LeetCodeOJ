// =====================================================================================
// 
//       Filename:  atoi.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月10日 14时47分48秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>
#include <limits.h>

using std::cout;
using std::endl;

class Solution{
	public:
		int atoi(const char *str) {
			if(str == NULL) {
				return 0;
			}
			
			if(*str == '\0') {
				return 0;
			}
			
			long long result = 0;
			
			while(*str == ' ') {
				str++;
			}
			
			bool isPositive = true;
			
			if(*str == '-') {
				isPositive = false; 
				str++;
			}
			else if(*str == '+') {
				isPositive = true; 
				str++;
			}
			
			while(*str && isdigit(*str)){
				int tmp = *str - '0';
				result = result*10 + tmp;
				str++;
			
				cout << "Result: " << result << endl;

				if(result > INT_MAX && isPositive) {
					result = INT_MAX;
					break;
				}

				if (result > 2147483648 && !isPositive){
					result = 2147483648;
				}
			}
			
        	if(!isPositive){
            	result = (-1) * result;
			}
			cout << "Result:: " << result << endl;
			
			if(result < INT_MIN) {
				cout << "aa" << endl;
				return  INT_MIN;
			}
			
			return result;
		}
};

int main(int argc, char *argv[])
{
	Solution testSolution;

	cout << testSolution.atoi("-9223372036854775809") << endl;


	return 0;
}

