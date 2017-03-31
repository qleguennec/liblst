/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 11:39:05 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/16 11:40:03 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void
	lst_free
	(t_lst *lst)
{
	t_lst	*next;

	if (lst)
	{
		free(lst->data);
		next = lst->next;
		free(lst);
		lst_free(next);
	}
}
