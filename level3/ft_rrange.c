#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int len;
	int *range;

	if (start > end)
		len = (start - end) + 1;
	else
		len = (end - start) + 1;
	range = malloc(len * sizeof(int));
	if (!range)
		return (NULL);
	while (i < len)
	{
		if (end < start)
			range[i] = end++;
		else
			range[i] = end--;
		i++;
	}
	return (range);
}