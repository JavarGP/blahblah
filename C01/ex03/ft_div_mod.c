/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jplace <jplace@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:18:08 by jplace            #+#    #+#             */
/*   Updated: 2024/08/27 11:38:40 by jplace           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main() {
//     int a = 42;
//     int b = 10;
//     int div;
//     int mod;

//     ft_div_mod(a, b, &div, &mod);

// 	printf("/ %d by %d quotient = %d remainder = %d\n", a, b, div, mod);

//     return 0;
// }