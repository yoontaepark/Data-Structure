// 스레드를 위한 필드를 노드에 추가하는 경우
struct TNode(
  int info;
  TNode left;
  TNode right;
  TNode left_thread;
  TNode right_thread;
}
