//some sample codes for counter reference of pointer
int a;
int *p_a
p_a = &a;   // p_a에 변수 a의 주소를 저장 
a = 231;    // a에 231을 저장 
*p_a = 521; // p_a가 지시하고 있는 주소(실제로는 a의주소)를 찾아가서 521을 저장(a=521; 과 동일)
