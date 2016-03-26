#pragma once
#ifndef _83_H_
#define _83_H_

#include <set>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(0) {}
};


class Solution
{
public:
	/*ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
			return NULL;
		set<int> numSet;
		ListNode *p = head;
		ListNode *q = p->next;
		numSet.insert(p->val);
		while(q){
			if(numSet.find(q->val) != numSet.end()){
				p->next = q->next;
				delete q;
			}else{
				p = p->next;
				numSet.insert(q->val);
			}
			q = p->next;
		}
		return head;
    }*/

	//改用hash数组，提升速度
	ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
			return NULL;
		int opposite = 50000;
		bool numMap[100000] = {false};
		ListNode *p = head;
		ListNode *q = p->next;
		numMap[p->val + opposite] = true;
		while(q){
			if(numMap[q->val + opposite]){
				p->next = q->next;
				delete q;
			}else{
				p = p->next;
				numMap[q->val + opposite] = true;
			}
			q = p->next;
		}
		return head;
    }
};



#endif