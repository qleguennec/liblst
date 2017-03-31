/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:05:49 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/31 14:24:25 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_lst
	*lst_new
	(void *data
	, t_lsttype type)
{
	t_lst	*new;

	MALLOC1(new);
	new->data = data;
	new->type = type;
	new->next = NULL;
	return (new);
}
