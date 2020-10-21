void deleteCircularNode(linkedList_h* H, listNode* prevNode){
//원형 연결 리스트에서 데이터의 값이 90인 노드(delNode)를 삭제하는 연산

  listNode* delNode;
  delNode = prevNode → link;
  prevNode → link = delNode → link;
  
  if (delNode == H → head) H → head = delNode → link;
  free(delNode);
}
