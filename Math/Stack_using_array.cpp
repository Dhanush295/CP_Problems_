#include<iostream>

#define MAX 10

using namespace std;


class Stack{
public:
	int a[MAX];
	int top;

public:
	Stack(): top(-1) {}

	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::isEmpty(){
	return (top=-1);
}

bool Stack::push(int x){
	if(top > MAX-1){
		cout<<"Stack full!\n";
		return 0;
	}
	else{
		a[++top] = x;
		cout<<x<<" :is pushed to stack\n";
		return x;
	}
}

int Stack::pop(){
	if(top < 0){
		cout<<"Stack is Empty!\n";
		return 0;
	}
	else{
		int num = a[top];
		top--;
		cout<<num<<" :is Removed from the stack\n";
		return num;
	}
}

int Stack::peek(){
	if(top<0){
		cout<<"Stack is Empty!\n";
		return 0;
	}
	else{
		int num = a[top];
		return num;
	}
}



int main(){
	Stack stack;
	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.pop();
	stack.pop();

	return 0;
}