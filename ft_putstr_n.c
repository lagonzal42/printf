/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:18:32 by lagonzal          #+#    #+#             */
/*   Updated: 2022/09/30 20:09:08 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_putstr_n(char *s)
{
	int	n;

	n = -1;
	while (s[++n])
		write(1, &s[n], 1);
	return (n);
}
