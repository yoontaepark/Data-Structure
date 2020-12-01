//Adding node in thread tree

void(insert(struct TNode *x, struct TNode *ttree){
  ttree→left = NULL;
  ttree→right = x→right;
  ttree→left_thread = x;
  ttree→right_thread = x→right_thread;
  x→right = ttree;
  x→right_thread = ttree;
}
  
