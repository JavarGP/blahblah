/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:06:24 by jplace            #+#    #+#             */
/*   Updated: 2024/09/01 19:25:16 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	
	i = 0;
	j = 0;
	
	while (str[i] != '\0')
	{
		if (to_find[j] != str[i])
		{	
			j = 0;
		}
		if (to_find[j] == str[i])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str [i - (j - 1)]);
		}
		i++;
	}
	return (NULL);
}

// int main ()
// {	
// 	char haystack[] = "wumbo the study of wumbology";
// 	char needle[] = "study";

// 	char *result = ft_strstr(haystack, needle);
// 	printf("%s", result);
// 	return (0);
// }