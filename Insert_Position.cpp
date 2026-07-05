void insertAtPosition(Node* &head, int pos, int value) {

    if(pos == 1){
        insertAtHead(head, value);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Invalid Position\n";
        return;
    }

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;
}
