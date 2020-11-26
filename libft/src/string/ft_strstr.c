/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: krambono <krambono@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 19:48:58 by krambono     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 19:55:59 by krambono    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	len_needle;
	int	len_haystack;

	i = 0;
	len_needle = ft_strlen(needle);
	len_haystack = ft_strlen(haystack);
	while (i < len_haystack - len_needle + 1)
	{
		if (!ft_strncmp(haystack + i, needle, len_needle))
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}