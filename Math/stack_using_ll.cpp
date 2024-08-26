#include<iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1 = nullptr) : data (data1), next(next1) {}
};

class Stack{
public:
	Node* top;
	int curr_sum;

public:
	Stack(): top(nullptr), curr_sum(0) {}

	Node* push(int x);
	Node* pop();
	bool peek();
	bool is_Empty();
};

bool Stack::is_Empty() {
    return curr_sum == 0;
}

Node* Stack::push(int x){
	if(top == nullptr){
		Node* new_node = new Node(x,top);
		top = new_node;
		curr_sum++;
		return top;
	}
	else{
		Node* new_node = new Node(x, top);
		top = new_node;
		curr_sum++;
		cout<<x<<" :is Pushed to the stack\n";
		return top;
	}
	
}

Node* Stack::pop(){
	if(is_Empty()){
		cout<<"Stack is Empty!\n";
		return top;
	}
	else{
		Node* temp= top;
		top = top->next;
		delete temp;
		curr_sum--;
	}
	return top;
}

bool Stack::peek(){
	if(curr_sum == 0){
		cout<<"Stack is empty!\n";
		return false;
	}
	else{
		cout<<top->data<<" : Is the top element!\n";
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
	Stack stack;
	stack.push(10);
	stack.push(20);
	Node* head = stack.push(30);
	print(head);
	head = stack.pop();
	print(head);
	// stack.peek();
	return 0;
}

