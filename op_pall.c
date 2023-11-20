#include "monty.h"

/**
 * op_pall - this prints all values on the stack
 * @stack: this pointer to the top of the stack
 * @line_number: the line number of the opcode
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		(void)line_number;
	}

}
