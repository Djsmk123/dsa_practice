/**
 * Definition for singly-linked list.*/
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    /*merge sort*/
    void merge(vector<int> &a,int s,int e)
    {
        int i=s;
        int m=s+(e-s)/2;
        int j=m+1;
        vector<int> tmp;
        while(i<=m and j<=e)
        {
            if(a[i]<a[j])
            {
                tmp.push_back(a[i++]);
            }
            else
             tmp.push_back(a[j++]);
        }
        while(i<=m)
        {
            tmp.push_back(a[i++]);
        }
          while(j<=m)
        {
            tmp.push_back(a[j++]);
        }
        int k=0;
        for(int idx=s; idx<=e; i++)
        {
            a[idx]=tmp[k++];
        }
        return;
    }
    void mergeSort(vector<int> &a,int s,int e)
    {
        if(s>=e)
        return;
        int mid=s+(e-s)/2;
        mergeSort(a,s,mid-1);
        mergeSort(a,mid+1,e);
        return merge(a,s,e);
    }
    ListNode* sortList(ListNode* head) {
        vector<int> lst;
        
        while(head->next!=NULL)
        {
            lst.push_back(head->val);
            head=head->next;
        }
        mergeSort(lst,0,lst.size()-1);
        ListNode *newHead=new ListNode;;
        for(auto x: lst)
        {
            newHead->val=x;
            newHead=newHead->next;
        }
        return newHead;
    }
};