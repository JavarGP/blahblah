/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:39:13 by jplace            #+#    #+#             */
/*   Updated: 2024/08/27 11:58:19 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_bucket;
	int	sec_bucket;

	aux_bucket = *a / *b;
	sec_bucket = *a % *b;
	*a = aux_bucket;
	*b = sec_bucket;
}

// int main( )
// {
//     int a;
//     int b;
//     a = 42;
//     b = 21;

//     ft_ultimate_div_mod(&a, &b);
//     printf("%d %d", a, b);
//     return 0;
// }
