#include "libft.h"
#include "fillit.h"

char		**ft_doubledup(char **tab)
{
	int			i;
	int			x;
	char		**tmp;

	if (tab == NULL)
		return (NULL);
	x = ft_strlen(tab[0]);
	if ((tmp = (char**)malloc(sizeof(char*) * (x + 4))) == NULL)
		return (NULL);
	tmp[x] = NULL;
	i = -1;
	while (++i < x - 1)
	tmp[i] = ft_strdup(tab[i]);
	return (tmp);

}
