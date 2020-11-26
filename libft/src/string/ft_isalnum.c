/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalnum.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: krambono <krambono@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 13:47:23 by krambono     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 19:46:30 by krambono    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A')
			|| (c <= '9' && c >= '0'));
}