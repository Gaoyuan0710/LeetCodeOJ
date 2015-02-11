// =====================================================================================
// 
//       Filename:  getIntersectionNode.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2015年02月07日 11时32分47秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Gaoyuan, sishuiliunian0710@gmail.com
//        Company:  Class 1204 of Computer Science and Technology
// 
// =====================================================================================

class Solution{
	public:
		ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
			
			ListNode *pa = headA, *pb = headB;
			int lengthA = 0, lengthB = 0;
			
			while(pa) {
				pa = pa->next;
				lengthA++;
			}
			
			while(pb) {
				pb = pb->next;
				lengthB++;
			}
			
			if(lengthA <= lengthB){
				int n = lengthB - lengthA;
				pa = headA;
				pb = headB;
				
				while(n) {
					pb = pb->next;
					n--;
				}
			}else{
				int n = lengthA - lengthB;
		      	pa = headA;
				pb = headB;
				while(n) {
					pa = pa->next;
					n--;
				}
			}
			while(pa != pb){
				pa=pa->next;
	      		pb=pb->next;
			}
			return pa;
		}
};

int main(int argc, char *argv[])
{


	return 0;
}

