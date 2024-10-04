#include <stdio.h>

int	ft_wordcount(char *s, char c)
{
	int	word;
	int	i;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

int main()
{
    int k;
    k = ft_wordcount("count words here", ' ');
    printf("word count %d\n", k);
}