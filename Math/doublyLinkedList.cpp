#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;

public:
	Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr){
		data = data1;
		next = next1;
		prev = prev1;
	}
};

void size(Node* head){
	int count = 0;
	Node* temp = head;

	while(temp != NULL){
		count++;
		temp = temp->next;
	}	

	cout<<count<<endl;
}


void print(Node* head){

	Node* temp = head;

	while(temp != NULL){
		cout<<temp->data<<"<--->";
		temp = temp->next;
	}
	cout<<endl;
}

Node* convert_to_dll(vector<int> &a){
	if(a.empty()) return nullptr;

	Node* head = new Node(a[0]);

	Node* temp = head;

	for(int i=1; i<a.size(); i++){
		Node* new_node = new Node(a[i]);
		new_node->prev = temp;
		temp->next = new_node;
		temp = new_node;
	}

	return head;
}


Node* insert_at_position(Node* head, int data, int pos){

	if(head == NULL){
		if(pos == 1){
			return new Node(data);
		}
	}

	if(pos == 1){
		return new Node(data, head);
	}

	int count = 0;
	Node* temp = head;

	while(temp != NULL){
		count++;
		if(count == pos-1){
			Node* new_node = new Node(data, temp->next, temp);
			temp->next = new_node;
		}

		temp = temp->next;

	}

	return head;
}

Node* delete_at_position(Node* head, int pos) {
    if (head == NULL) {
        return NULL;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return head;
    }

    int count = 1;
    Node* temp = head;

    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        return head;  
    }

    Node* back = temp->prev;
    Node* front = temp->next;

    if (back != NULL) {
        back->next = front;
    }
    if (front != NULL) {
        front->prev = back;
    }

    delete temp;

    return head;
}





int main(){
	vector<int> a = {20, 39, 48, 98};

	Node* head = convert_to_dll(a);
	print(head);
	size(head);

	// head = insert_at_position(head, 45 , 4);
	// print(head);
	// size(head);

	head = delete_at_position(head, 4);
	print(head);
	size(head);



	return 0;
}
