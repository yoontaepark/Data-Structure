typedef struct ListNode{
  int data[10];
  struct ListNode* link;
} listNode;

typedef struct{
  listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void) {
  linkedList_h* H;
  H = (linkedlist_h*)malloc(sizeof(linkedList_h));
  H → head = NULL;
  return H;
}
