#include<iostream>
#include<vector>

using namespace std;

class Node{

public:
	int data;
	Node* next;

public:
	Node(int data1, Node* next1 = nullptr){
		data = data1;
		next = next1;
	}
};

void size(Node* head){
	Node* temp = head;
	int count = 0;
	while(temp){
		count++;
		temp = temp->next;
	}
	cout<<"Linked List size is: "<<count<<endl;
}

void print(Node* head){
	Node* temp = head;
	while(temp){
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<endl;

}

Node* insert_at_position(Node* head, int data, int k ){
	if(head == NULL){
		if(k == 1){
			Node* new_node = new Node(data);
			return new_node;
		}
		else{
			return head;
		}
	}

	if(k == 1){
		return new Node(data, head);
	}

	int count = 0;
	Node* temp = head;

	while(temp != NULL){
		count++;

		if(count == k-1){
			Node* new_node = new Node(data, temp->next);
			temp->next = new_node;
		}

		temp = temp->next;
	}
	return head;   
};

Node* delete_at_position(Node* head, int k){
	if(head == NULL) {
		return NULL;
	}

	if(k == 1){
		Node* temp = head;
		head = head->next;
		free(temp);
		return head;
	}

	int count = 0;
	Node* temp = head;
	Node* prev = NULL;

	while(temp != NULL){
		count++;

		if(count == k){
			prev->next = prev->next->next;
			free(temp);
			break;
		}

		prev = temp;
		temp = temp->next;
	}

	return head;
}



Node* convert_to_ll(vector<int> &a){

	Node* head = new Node(a[0]);
	Node* mover = head;

	for(int i=1; i<a.size(); i++){
		Node* temp = new Node(a[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}


Node* insert_at_before_val(Node* head, int add_val, int at_data ){

	if(head == NULL) return NULL;

	if(head->data == at_data){
		Node* new_node = new Node(add_val,head);
		return new_node;
	}

	Node* temp = head;
	Node* prev = NULL;

	while(temp->data != at_data){
		prev = temp;
		temp = temp->next;
	}

	if(temp != nullptr){
		Node* new_node = new Node(add_val,prev->next );
		prev->next = new_node;
	}
	else{
		cout<<"No Data found to insert at: "<<at_data<<endl;
	}

	return head;

}


int main(){
	vector<int> a = {19, 28, 39,11, 21};
	Node* head = convert_to_ll(a);
	print(head);

	head = insert_at_before_val(head, 30, 19);
	print(head);
	size(head);

	// head = delete_at_val(head, 3);
	// print(head);
	// size(head);

	return 0;
}
