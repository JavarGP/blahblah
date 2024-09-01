/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:00:36 by jplace            #+#    #+#             */
/*   Updated: 2024/08/26 11:28:06 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '1' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {   
//     char str[]= "122o2";
//     int result = ft_str_is_numeric(str);
//     printf("%d", result);
//     return 0;
// }