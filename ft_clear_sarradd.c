/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sarrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:11:28 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/01 18:41:33 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//@brief clear array givern as parameter and add a string to 
//the provided array. 
//If array is null, creates a new one, add the string and return it.
char	**ft_clear_sarradd(char **array, char *str)
{
	char	**new_arr;
	int		i;

	if (!array)
	{
		new_arr = (char **) malloc (2 * sizeof(char *));
		if (!new_arr)
			return (NULL);
		new_arr[0] = ft_strdup(str);
		new_arr[1] = NULL;
		return (ft_freematrix(&array), new_arr);
	}
	new_arr = (char **) malloc ((ft_sarrlen(array) + 2) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	i = -1;
	while (array[++i])
		new_arr[i] = ft_strdup(array[i]);
	new_arr[i++] = ft_strdup(str);
	new_arr[i] = NULL;
	return (ft_freematrix(&array), new_arr);
}
