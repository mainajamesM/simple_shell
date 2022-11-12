#include "shell.h"

/**
<<<<<<< HEAD
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
=======
 *  * bfree - frees a pointer and NULLs the address
 *   * @ptr: address of the pointer to free
 *    *
 *     * Return: 1 if freed, otherwise 0.
 *      */
int bfree(void **ptr)
{
		if (ptr && *ptr)
				{
							free(*ptr);
									*ptr = NULL;
											return (1);
												}
			return (0);
>>>>>>> cb08c048a031f8f9ecb1dc3a7a2f279cefc71332
}
