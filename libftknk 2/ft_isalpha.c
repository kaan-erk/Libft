/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoraman <ktoraman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:38:39 by ktoraman          #+#    #+#             */
/*   Updated: 2024/10/21 17:50:45 by ktoraman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a <= 'Z' && a >= 'A') || (a <= 'z' && a >= 'a'))
		return (1);
	else
		return (0);
}
