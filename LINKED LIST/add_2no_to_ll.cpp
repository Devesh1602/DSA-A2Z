/*
Node *addTwoNumbers(Node *num1, Node *num2)

{

    Node*start= new Node();

    Node*temp= start;

    int carry= 0;

     while(num1!=NULL || num2!=NULL || carry){

        int sum= 0;

        if(num1!=NULL){

            sum+=num1->data;

            num1= num1->next;

        }

 

        if (num2 != NULL) {

          sum += num2->data;

          num2 = num2->next;

        }

 

        sum += carry;

        carry = sum / 10;

 

        Node *node = new Node(sum % 10);

        temp->next = node;

        temp = temp->next;

    }

        return start->next;

}*/