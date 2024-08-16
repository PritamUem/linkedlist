newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = newData;
newNode->next = head;
head = newNode;
