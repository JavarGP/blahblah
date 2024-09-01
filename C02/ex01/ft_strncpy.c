/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:32:08 by jplace            #+#    #+#             */
/*   Updated: 2024/08/25 16:03:09 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
//#include <stdio.h>

char *ft_strcpy(char *dest, char *src) {
    char *ptr = dest;
    int i;
    i = 0;
    while (src[i] != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';

    return dest;
}


// int main()
// {
//     char source[] = "hello world";
//     char destination[50];

//     ft_strcpy(destination, source);
//     printf("%s %s", source, destination);
//     return 0;
// }