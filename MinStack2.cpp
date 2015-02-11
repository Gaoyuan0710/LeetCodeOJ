// =====================================================================================
// 
//       Filename:  MinStack2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月07日 12时10分29秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

#include <iostream>
#include <stack>

class MinStack {
	private:
    	std::stack<int> ordinary_stack;
    	std::stack<int> min_stack;
	public:
    	void push(int x) {
        	ordinary_stack.push(x);
        	if (min_stack.empty() || ((!min_stack.empty()) && x <= min_stack.top())) {  
            	min_stack.push(x);
        	}
		}
    
    	void pop() {
        	if (!ordinary_stack.empty()) {
            	if (ordinary_stack.top() == min_stack.top()){
                	min_stack.pop();
				}
           		ordinary_stack.pop();
        	}
    	}
    
    	int top() {
        	if (!ordinary_stack.empty()){
            	return ordinary_stack.top();
			}
    	}
    
    	int getMin() {
        	if (!min_stack.empty()){
            	return min_stack.top();
			}
    	}
};

int main(int argc, char *argv[])
{


	return 0;
}

