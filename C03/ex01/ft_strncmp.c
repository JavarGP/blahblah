/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 09:25:22 by jplace            #+#    #+#             */
/*   Updated: 2024/08/31 10:05:17 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (!(s1[i] == '\0' || s2[i] == '\0' ) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - ((unsigned char)s2[i]));
		}
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char destination[] = "bana4nas";
// 	char source[] = "banana";

// 	int result = ft_strncmp(destination, source, (unsigned)6);
// 		if (result == 0)
//  		write(1, "Strings are equal\n", 18);
//  	else if (result < 0)
//  		write(1, "s1 is less than s2\n", 19);
// 	else
//  		write(1, "s1 is greater than s2\n", 22);
// 	return 0;
// }