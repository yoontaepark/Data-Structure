typedef struct {
  int heap[MAX_Date]
  int heap_size;
} HeapType;

int deleteHeap(HeapType *h){
  int parent, child;
  int item, temp;
  
  item = h → heap[1];
  temp = h → heap[(h → heap_size)--];
  parent = 1; 
  child = 2;
  
  while(child <= h → heap_size){
    if((child < h → heap_size) && (h → heap[child] > h → heap[child+1]))
      child++;
    if(temp <= h → heap[child])
      break;
    h → heap[parent] = h
    parent = child;
    child *= 2;
  }
  h → heap[parent] = temp;
  return item;
}
  
