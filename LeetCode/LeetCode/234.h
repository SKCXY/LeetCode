#pragma once
#ifndef _234_H_
#define _234_H_

//Palindrome Linked List

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
	//最简单的思路 O(n) time, O(n) space-->找到O(n) time, O(1) space 
	bool isPalindrome(ListNode* head) {
		ListNode* head2 = reverseLinkList(head);
		while(head != NULL && head2 != NULL){
			if(head->val != head2->val){
				return false;
			}
			head = head->next;
			head2 = head2->next;
		}
		return true;
    }

	ListNode* reverseLinkList(ListNode* head){
		ListNode* index = head;
		ListNode* reverseHead = new ListNode(0);
		while(index != NULL){
			ListNode* temp = new ListNode(index->val);
			temp->next = reverseHead->next;
			reverseHead->next = temp;
		}
		return reverseHead->next;
	}


};



#endif