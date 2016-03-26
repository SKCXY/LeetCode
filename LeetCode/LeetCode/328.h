#pragma once
#ifndef _328_H_
#define _328_H_

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
	ListNode* oddEvenList(ListNode* head) {
		if(!head)
			return NULL;
        ListNode *evenList = new ListNode(0);
		ListNode *p, *q, *s;
		s = evenList;

		int i = 2;
		p = head, q = p->next;

		while(q){
			if(i%2 == 0){
				p->next = q->next;
				s->next = q;
				s = s->next;
			}else{
				p = p->next;
			}
			q = p->next;
			i++;
		}
		s->next = NULL;
		p->next = evenList->next;

		return head;
    }
};



#endif