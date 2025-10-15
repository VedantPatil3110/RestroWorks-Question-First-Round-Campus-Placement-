bool cycle(Node*root){
    if(!root || !root->next){
        return false;
    }
    Node*slow=root;
    Node*fast=root;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}