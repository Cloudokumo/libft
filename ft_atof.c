/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiehl-b <adiehl-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:21:36 by adiehl-b          #+#    #+#             */
/*   Updated: 2024/11/17 17:22:32 by adiehl-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atoi_part(const char *nptr, int *i)
{
	double	result;
	int		sign;

	result = 0.0;
	sign = 1;
	while (nptr[*i] == 32 || (nptr[*i] >= 9 && nptr[*i] <= 13))
		(*i)++;
	if ((nptr[*i] == '-' || nptr[*i] == '+') && nptr[*i])
	{
		if (nptr[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	while (nptr[*i] && ft_isdigit(nptr[*i]))
	{
		result = result * 10.0 + (nptr[*i] - '0');
		(*i)++;
	}
	return (sign * result);
}

double	ft_atof(const char *nptr)
{
	int i;
	double result;
	double fraction;
	int divisor;

	i = 0;
	result = ft_atoi_part(nptr, &i);
	fraction = 0.0;
	divisor = 1;
	if (nptr[i] == '.')
	{
		i++;
		while (nptr[i] && ft_isdigit(nptr[i]))
		{
			fraction = fraction * 10.0 + (nptr[i] - '0');
			divisor *= 10;
			i++;
		}
		result += fraction / divisor;
	}
	return (result);
}