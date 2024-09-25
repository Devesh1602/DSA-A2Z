/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}


Node* sortList(Node *head)
{
    //create 3 dummy nodes, it helps in merging thes lists
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    //create tails also to insert at Tail
    Node* oneTail = oneHead;
    Node* zeroTail = zeroHead;
    Node* twoTail = twoHead;
    
    Node* curr = head;
    
    //create seperate list 0s, 1s, 2s
    while(curr!=NULL){
        int value = curr->data;
        if(value==0){
            insertAtTail(zeroTail, curr);
        }
        else if(value==1){
            insertAtTail(oneTail, curr);
        }
        else if(value==2){
            insertAtTail(twoTail, curr);
        }
        curr = curr-> next;
    }
    
    //merge 3 sublists
    
    //check if list of 1 is empty or not, coz if it is then we have to show it on 2
    
    //1s list is not empty => 0 ke aage 1 list lagao	=> one if condition needed
    if(oneHead->next!=NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        //1s list empty, to 2 wali list lagao
         zeroTail->next = twoHead->next;
    }
    
    //now normal flow, 1 ki list ka dekh lia, now one ki list ke aage 2 ki list lagao
    	oneTail->next = twoHead->next;
    	//last wala 2tail ko null point karao
    	twoTail->next = NULL;
	
    //list merging complete
    
//     *************************
    //now setup head, and remove dummy pointers
    //setup head
    head = zeroHead -> next;
    
    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    //now return head
    
    return head;
    	
}
*/