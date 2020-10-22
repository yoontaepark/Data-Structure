typedef struct ListNode { //이중 연결 리스트의 노드 구조 정의
  struct ListNode* Llink;
  int data[10];
  struct ListNode* Rlink;
} listNode;

typedef struct { //이중 연결 리스트의 헤더 노드 구조 정의
  listNode* Lhead;
  listNode* Fhead;
} linkedList_h;

linkedList_h* createLinkedList_h(void) { // 원형 연결 리스트의 헤드 노드 생성
  linkedLish_h* H;
  H = (linkedList_h*)malloc(sizeof(linkedList_h));
  H → Lhead = NULL;
  H → Fhead = NULL;
  return H;
}

