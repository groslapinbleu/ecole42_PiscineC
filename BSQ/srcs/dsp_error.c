/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dsp_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcabot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 14:10:42 by xcabot            #+#    #+#             */
/*   Updated: 2016/09/20 18:13:07 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int	dsp_error(char *msg)
{
	write(2, msg, ft_strlen(msg));
	return (0);
}
