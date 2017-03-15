/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:22:11 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/15 10:41:10 by qle-guen         ###   ########.fr       */
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
	t_lst			*ret;
	unsigned char	*s;

	ret = NULL;
	while ((s = ft_word(&p, &n1, match, n2)))
	{
		MALLOC_N(word, ((unsigned char *)p - s));
		ft_memcpy(word, s, (unsigned char *)p - s);
		lst_add(&ret, lst_new(word, DATA));
	}
	return (ret);
}
