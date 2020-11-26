/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: krambono <krambono@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 09:31:23 by krambono     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 19:46:28 by krambono    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;

	nbr = 0;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			&& str[i] != '\0')
		i++;
	sign = str[i] == '-' ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}