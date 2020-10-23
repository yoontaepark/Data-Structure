void addDNode(linkedLish_h* H, listNode* prevNode, int x) {
//이중 연결 리스트 노드 삽입 연산, x값은 200이라고 가정함
  listNode* NewNode;
  NewNode = (listNode*)malloc(sizeof(listNode));
  NewNode → Llink = NULL;
  NewNode → data = x;
  NewNode → Rlink = NULL;

  NewNode → Rlink = prevNode → Rlink;
  NewNode → Rlink = NewNode;
  NewNode → Llink = prevNode;
  NewNode → Rlink → Llink = NewNode;
}
  
