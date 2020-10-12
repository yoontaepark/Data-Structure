void deleteNode(linkedList_h* H){ //리스트의 마지막 노드 삭제 연산
  listNode* prevNode;
  listNode* delNode;
  if(H → head == NULL) return; //공백 리스트인 경우, 삭제 연산 중단
  if(H → head → link == NULL){ //리스트에 노드가 한개인 경우
    free(H → head);
    H → head = NULL;
    return;
  }
  else{ //리스트에 노드가 여러 개 있는 경우
    prevNode = H → head;
    delNode = H → head → link;
    while(delNode → link != NULL){
      prevNode = delNode;
      delNode = delNode → link;
    }
    free(delNode);
    prevNode → link = NULL;
  )
}  
