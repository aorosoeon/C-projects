/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achuzhyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:11:51 by achuzhyk          #+#    #+#             */
/*   Updated: 2017/08/17 16:11:56 by achuzhyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ten(int c, double t)
{
	int r = 0;

	while (r < c - 1)
	{
		t = t * 10;
		r++;
	}
	return (t);
}