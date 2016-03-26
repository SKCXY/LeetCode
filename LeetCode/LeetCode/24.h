#pragma once
#ifndef _24_H_
#define _24_H_

//TODO值的学习


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
	ListNode* swapPairs(ListNode* head) {
		if(head == NULL)
			return NULL;
		ListNode* left = head;
		ListNode* right = head->next;
		ListNode* pre = NULL;
		//更新头结点
		if(right != NULL)
			head = right;
		//swap
		while(right != NULL){
			left->next = right->next;
			right->next = left;
			if(pre != NULL)
				pre->next = right;
			if(left->next == NULL)
				return head;
			pre = left;
			left = left->next;
			right = left->next;
		}
		return head;

    }
};



#endif