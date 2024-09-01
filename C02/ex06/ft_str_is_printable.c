/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:45:03 by jplace            #+#    #+#             */
/*   Updated: 2024/08/26 11:52:14 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {   
//     char message[]= "o";
//     ft_str_is_printable(message);
//     int result = ft_str_is_printable(message);
//     printf("%d",result);
//     return 0;
// }