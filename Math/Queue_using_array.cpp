#include<iostream>

#define MAX 10

using namespace std;

class Queue{
public:
	int start;
	int end;
	int count_sum;
	int a[MAX];

public:
	Queue(): start(0), end(-1),  count_sum(0){}

	bool push(int x);
	int pop();
	int peek();
	bool is_Empty();
	bool is_Full();
};


bool Queue::is_Empty(){
	return(count_sum == 0);
}

bool Queue::is_Full(){
	return(count_sum == MAX);
}

bool Queue::push(int x){
	if(is_Full()){
		cout<<"Queue is full\n";
		return false;
	}
	else{
		end = (end+1)%MAX;
		a[end] = x;
		count_sum++;
		cout<<x<<" :Is pushed to Queue\n";
		return true;
	}
}

int Queue::pop(){
	if(is_Empty()){
		cout<<"Queue is Empty!\n";
		return 0;
	}
	else{
		int num = a[start];
		start = (start + 1) % MAX;
		count_sum--;
		cout<<num<<" : is poped from the Queue\n";
		return num;
	}
}

int Queue::peek(){
	if(is_Empty()){
		cout<<"Queue is Empty\n";
		return 0;
	}
	else{
		int num = a[start];
		cout<<num<<" :is the top element\n";
		return num;
	}
}

int main(){
	Queue queue;
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.pop();
	queue.peek();
	return 0;
}