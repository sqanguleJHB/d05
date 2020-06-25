/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:18:57 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/25 09:23:03 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int 	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (dest[i] && src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
