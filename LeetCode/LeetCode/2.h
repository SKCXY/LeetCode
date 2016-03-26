#pragma once
#ifndef _2_H_
#define _2_H_

//TODOÖµµÄÑ§Ï°


#include <vector>
#include <unordered_map>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(0);
		ListNode *cur = head;
		int digit, carry = 0;
		
		while(l1 || l2)
		{
			digit = (l1 ? l1->val : 0) + (l2 ? l2->val: 0) + carry;
			if(digit >= 10){
				carry = 1;
				digit -= 10;
			}else
				carry = 0;

			cur->next = new ListNode(digit);
			cur = cur->next;

			if(l1) l1 = l1->next;
			if(l2) l2 = l2->next;
		}
		if(carry) cur->next = new ListNode(1);
		return head->next;
    }
	
};



#endif