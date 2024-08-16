void insertAtPosition(struct Node** head, int position, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    int i;
    newNode->data = newData;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    for (i = 0; i < position - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) return;
    newNode->next = temp->next;
    temp->next = newNode;
}
