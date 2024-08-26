#include<iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1 = nullptr): data(data1), next(next1){}

};

class Queue{
public:
	Node* start;
	Node* end;
	int count_sum;

public:
	Queue(): start(nullptr), end(nullptr), count_sum(0) {}

	bool is_Empty();
	Node* push(int x);
	Node* pop();
	bool peek();
};

bool Queue::is_Empty(){
	return(count_sum == 0);
}

Node* Queue::push(int x){
	Node* new_node = new Node(x);
	if(is_Empty()){
		start = end = new_node;
	}
	else{
		end->next = new_node;
		end = new_node;
	}
	count_sum++;
	return start;
}

Node* Queue::pop(){
	if(is_Empty()){
		cout<<"Queue is empty!\n";
		return nullptr;
	}
	else{
		Node* temp = start;
		start = start->next;
		count_sum--;
		if (is_Empty()) {  
            end = nullptr;
        }
		delete temp;
		return start;
	}
}

bool Queue::peek(){
	if(is_Empty() || start == nullptr){
		cout<<"Queue is empty!\n";
		return false;
	}
	else{
		cout<<start->data<<" Is the peek element!\n";
		return true;
	}
}



void print(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"NULL\n";
}


int main(){

	Queue queue;
    queue.push(12);
    queue.push(15);
    queue.push(20);
    queue.push(37);

    Node* head = queue.push(51);  
    print(head);  
    
    queue.peek();
    
    head = queue.pop(); 
    print(head);  

    return 0;
}