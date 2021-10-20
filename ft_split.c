/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:36:37 by grubin            #+#    #+#             */
/*   Updated: 2021/10/20 10:38:12 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] == c && s[i + 1] != c))
			{
			count++;
			}
		i++;
		}
	return (count);
}
	



/*char	**ft_split(char const *s, char c)
{
	if (!s1 || !c)
		return (NULL);
}*/

int main()
{
	char const *s = " coucou les loulous ";
	char c = ' ';

	printf("%d", count_word(s, c));
	return (0);
}


