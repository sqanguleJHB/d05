/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:34:36 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/24 09:08:01 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int 	i;
	int 	first_char;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')
				 || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (first_char && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!first_char && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			first_char = 0;
		}
		else
			first_char = 1;
		i++;
	}
	return (str);
}
