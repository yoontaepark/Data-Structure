void deleteDNode(linkedList_h& H, listNode* delNode){
// 이중 연결 리스트에서 데이터의 값이 300인 노드(delNode)를 삭제하는 연산 

  delNode → Llink → Rlink = delNode → Rlink;
  delNode → Rlink → Llink = delNode → Llink;
  free(delNode);
}
