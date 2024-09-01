/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:49:48 by jplace            #+#    #+#             */
/*   Updated: 2024/08/27 11:00:04 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	auxilary_bucket;

	auxilary_bucket = *a ;
	*a = *b;
	*b = auxilary_bucket;
}

// int main(void)
// {   
//     int a;
//     int b;
//     a = 10;
//     b = 20 ;
//     ft_swap(&a, &b);
//     printf("%d %d", a, b);
//     return (0);
// }