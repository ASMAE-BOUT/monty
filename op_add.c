#include "monty.h"

/**
 * op_add - this adds the top two elements of the stack
 * @stack:it is the pointer to the top of the stack
 * @line_number: it is line number of the opcode
 **/
void op_add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free(glob.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	op_pop(stack, line_number);
}
