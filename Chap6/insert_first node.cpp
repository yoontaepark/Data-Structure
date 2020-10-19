void addFirstNode(linkedList_h* H, int x){
//원형 리스트 첫번째 노드 삽입 연산, x값은 100이라고 가정함 
  listNode* tempNode;
  listNode* NewNode;
  
  NewNode = (listNode*)malloc(listNode));
  NewNode → data = x;
  NewNode → link = NULL;
  
  if(H → head == NULL) { //현재 리스트가 공백인 경우
    H → head = NewNode;
    NewNode → link = NewNode;
    return;
  }
  
  tempNode = H → head;
  while(tempNode → link != H → head) tempNode = tempNode → link;
  NewNode → link = tempNode → link;
  tempNode → link = NewNode;
  H → head = NewNode;
}
  
