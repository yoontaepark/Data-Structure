int get_node_count(nodeptr *root){
  if(root == NULL) return 0;
  int result = 1;
  result += get_node_count((nodeptr*)root→left)
            +
            get_node_count((nodeptr*)root→right);
  return result;
}             
