// =====================================================================================
// 
//       Filename:  Palindrome.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月25日 15时07分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>

class Solution{
	public:
		bool isPalindrome(int x){
		
			if (x < 0){
				return false;
			}
			if (x == 0){
				return true;
			}

			int base = 1;

			while (x / base >= 10){
				base *= 10;
			}

			while (x){
				int left = x / base;
				int right = x % 10;

				if (left != right){
					return false;
				}

				x -= base * left;
				base /= 10;
				x /= 10;
			}
			return true;
		}

};

