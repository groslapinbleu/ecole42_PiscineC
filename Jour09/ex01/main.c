/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:33:02 by ajouanna          #+#    #+#             */
/*   Updated: 2016/09/08 19:29:05 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour);

int		main(void)
{
	int i;

	i = 0;
	while (i <=24)
	{
		ft_takes_place(i);
		i++;
	}
	return (0);
}