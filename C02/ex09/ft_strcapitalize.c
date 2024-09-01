/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:56:41 by jplace            #+#    #+#             */
/*   Updated: 2024/08/29 11:01:18 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' && str[i - 1] < ','))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {   
//     char message[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     ft_strupcase(message);
//     printf("%s",message);
//     return 0;
// }