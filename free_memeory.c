#include "main.h"

/**
 * dealocate_container - Frees astruct
 * @dest: The Struct
 */
void dealocate_container(container_s *dest)
{
	free(dest->start);
	free(dest);
}
