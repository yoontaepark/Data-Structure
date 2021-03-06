// Depth First Search
// Using Circular Reference
void DFS(int v){
  int w;
  extern int VISITED[];
  VISITED[v] = 1;
  while(v에 인접한 모든 노드 w)
    if(!VISITED[w])
      DFS(w);
}

// Using stack directly
void DFS(inv v){
  int n,w;
  extern struct stack *s;
  extern int VISITED[];
  InitializeStack(s);
  push(s,v);
  VISITED[v] = 1;
  while((n=pop(s)) >= 0){
    VISITED[n] = 1;
    while(n에 인접한 모든 노드 w){
      if( !VISITED[w]){
        push(s,w);}
    }
  }
}        
