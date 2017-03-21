/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:48:59 by rpatoux           #+#    #+#             */
/*   Updated: 2016/11/02 16:54:17 by rpatoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if ((nb == 0) || (nb == 1))
		return (1);
	if ((nb > 1) && (nb < 13))
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}