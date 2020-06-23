/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:01:54 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/23 11:28:17 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		index1;
	int		index2;

	if (!to_find[0])
		return (str);
	index1 = 0;
	while (str[index1])
	{
		index2 = 0;
		while (str[index1 + index2] == to_find[index2])
			index2++;
		if (!to_find[index2])
			return (&str[index1]);
		index1++;
	}
	return (NULL);
}
