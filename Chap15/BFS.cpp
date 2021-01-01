void BFS(int v){
  int w;
  extern struct queue *q;
  VISITED[v] = 1;
  InitializeQueue(q);
  AddQueue(q,v);
  while(!q_empty()){
    v = DeleteQueue(q);
    while(v에 인접한 모든 노드 w){
      if(!VISITED[w]){
        AddQueue(q,w);
        VISITED[w] = 1;
      }
    }
  }
}
