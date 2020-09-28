void push(int* stack, int* top, element item) {
		if (*top >= STACK_SIZE - 1) {
			printf("Stack is Full!! \n");
			return;
		}
		else stack[++top] = item;
	}
