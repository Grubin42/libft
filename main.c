/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:15:21 by grubin            #+#    #+#             */
/*   Updated: 2021/10/13 13:12:21 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main()
{
	char dest[] = "oldstring";
	const char src[] = "newstring";

	printf("before memmove dest = %s, src = %s\n", dest, src);
	printf("%zu\n", ft_strlcpy(dest, src, 4));
	printf("after memmove dest = %s , src = %s\n", dest, src);

	return(0);
}
