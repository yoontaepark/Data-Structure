#include <iostream>

//스택 생성
#define stack_size 10
typedef int element;
element stack[stack_size];
int top = -1;
int item = 400;

int main() {
	void push(int *stack, int *top, element item); {  //스택 삽입, ITEM은 400으로 가정
		if (top >= stack_size - 1) {				  //스택이 FULL 인경우 에러메시지 호출
			printf("Stack is Full!! \n");
			return 0;
		}
		else stack[++ top] = item;
	}
}
