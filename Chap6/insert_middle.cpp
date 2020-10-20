void addMiddleNode(linkedList_h* H, listNode* prevNode, int itdata){
//원형 연결 리스트 중간 노드로 삽입 연산, itdata 값은 110 이라고 가정함
  listNode* NewNode;  
  NewNode = (listNode*)malloc(listNode));
  NewNode → data = itdata
  NewNode → link = NULL;
  
  NewNode → link = prevNode → link;
  NewNode → link = NewNode;
  return;
}
