/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_emptyorspace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:47:04 by daviles-          #+#    #+#             */
/*   Updated: 2024/03/29 14:18:54 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//@brief This function check if a string is empty or just have spaces
int	check_emptyorspace(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (!str || str == NULL)
		return (1);
	while (str[i])
	{
		if (ft_isspace(str[i]))
			space++;
		i++;
	}
	if (i == space)
		return (1);
	return (0);
}
