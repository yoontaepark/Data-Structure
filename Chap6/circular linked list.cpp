typedef struct ListNode { //원형 연결 리스트의 노드 구조 정의
  char int[10];
  struct ListNode* link;
} listnode;

typedef struct { //원형 연결 리스트의 헤드 노드 구조 정의
  listNode* head;
} listnode_h;

linkedList_h* createLinkedList_h(void) { // 원형 연결 리스트의 헤드 노드 생성
  linkedList_h* H;
  H = (linkedList_h*)malloc(sizeof(linkedList_h));
  H → head = NULL'
  return H;
}
