class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // find the length of the list
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* tail=NULL;
        int n=0;// n is length
        while(temp!=NULL){
            if(temp->next==NULL) tail=temp;
            temp=temp->next;
            n++;
        }
        k=k%n;
        if(k==0) return head;
        temp=head;
        // I have to place temp at (n-k)th position
        for(int i=1;i<(n-k);i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};