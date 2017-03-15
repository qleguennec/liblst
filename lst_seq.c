/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_seq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:54:14 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/15 10:58:43 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void
	lst_seq
	(t_lst *l
	, void (*f) (void *, void *)
	, void *ctxt)
{
	if (l)
	{
		if (l->type == LST_LST)
			lst_seq(l->data, f, ctxt);
		else if (l->type == LST_DATA)
		{
			f(l->data, ctxt);
			lst_seq(l->next, f, ctxt);
		}
	}
}
