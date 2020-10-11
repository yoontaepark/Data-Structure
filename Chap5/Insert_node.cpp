void addNode(linkedLish_h* H, int x){
//리스트 마지막 노드에 삽입 연산하며, x값은 100이라고 가정함
  liseNode* NewNode;
  liseNode* LastNode;
  NewNode = (listNode*)malloc(sizeof(listNode));
  NewNode → data = x;
  NewNode → link = NULL;
  if(H → head == NULL){ //현재 리스트가 공백인 경우
    H → head = NewNode;
    return;
  }
  Lastnode = H → head;
  while(LastNode → link != NULL) LastNode = LastNode → link;
  LastNode → link = NewNode;
}
  
  
