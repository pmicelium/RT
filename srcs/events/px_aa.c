/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_aa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlantonn <mlantonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 15:58:07 by mlantonn          #+#    #+#             */
/*   Updated: 2018/06/27 01:15:55 by mlantonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "events.h"

void	pixelate(t_data *data)
{
	data->px = data->px > 0 ? 0 : 6;
}

void	anti_alias(t_data *data)
{
	data->aa = data->aa > 1 ? 1 : 3;
}