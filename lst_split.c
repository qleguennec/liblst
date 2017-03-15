/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:22:11 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/15 11:12:54 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_lst
	*lst_split
	(void *p
	, size_t n1
	, void *match
	, size_t n2)
{
	char			*word;
	t_lst			*l;
	t_lst			*ret;
	unsigned char	*s;

	l = NULL;
	while ((s = ft_word(&p, &n1, match, n2)))
	{
		MALLOC_N(word, 1 + ((unsigned char *)p - s));
		if (l == NULL)
		{
			ret = lst_new(word, LST_DATA);
			l = ret;
		}
		else
		{
			l->next = lst_new(word, LST_DATA);
			l = l->next;
		}
		ft_memcpy(word, s, (unsigned char *)p - s);
		word[(unsigned char *)p - s] = '\0';
	}
	return (ret);
}
