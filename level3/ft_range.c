#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int len;

	if (start < end)
		len = (end - start) + 1;
	else
		len = (start - end) + 1;
	int *range = malloc(len * sizeof(int));
	
	if (!range)
		return (NULL);
	while (i < len)
	{
		if (start < end)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
	return (range);
}