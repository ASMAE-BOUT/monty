#include "monty.h"

/**
 * op_pop - this removes the top element of the stack
 * @stack: the pointer to the top of the stack
 * @line_number: the line number of the opcode
 **/
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(glob.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	/*Set temp to point to the next node in the stack*/
	temp = (*stack)->next;
	/*Free the memory allocated for the current top node of the stack*/
	free(*stack);
	/*The update the head pointer to point to the new top node.*/
	*stack = temp;
	/*The update the prev pointer of the new top node to NULL*/
	/*so as to indicate that it is now the top of the stack.*/
	if (*stack != NULL)
		(*stack)->prev = NULL;
}
