#pragma once
#ifndef _206_H_
#define _206_H_

//


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
	ListNode* reverseList(ListNode* head) {
		if(head == NULL)
			return head;
		ListNode* pre = head;
		head = head->next;
		ListNode* reverseHead = new ListNode(0);
		while(head != NULL){
			pre->next = reverseHead->next;
			reverseHead->next = pre;
			//
			pre = head;
			head = head->next;
		}
		pre->next = reverseHead->next;
		reverseHead->next = pre;

		return reverseHead->next;
    }
};



#endif