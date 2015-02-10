// =====================================================================================
// 
//       Filename:  ZigZag.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月10日 11时37分01秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>
class Solution {
public:
    string convert(string s, int nRows) {
        string result = "";
        int step = nRows * 2;
        int str_len = s.length();
        if (nRows <= 1 || str_len == 0 || nRows >= str_len) {
            return s;
        }
        for(int i = 0; i < nRows && i < str_len; ++i) {
            step = (step - 2) ? (step - 2) : ((nRows - 1) * 2);
            int pos = i;
            int now_step = step;
            while(pos < str_len) {
                result = result + s[pos];
                pos += now_step;
                now_step = 
					((nRows - 1) * 2 - now_step) ? ((nRows - 1) * 2 - now_step) : ((nRows - 1) * 2);
            }
        }
        return result;
    }
};
int main(int argc, char *argv[])
{


	return 0;
}

