/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:06:26 by qle-guen          #+#    #+#             */
/*   Updated: 2017/03/16 11:40:56 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H

# include "../libft/libft.h"
# include "../libft/malloc.h"

typedef enum		e_lsttype
{
	LST_LST,
	LST_DATA
}					t_lsttype;

typedef struct		s_lst
{
	void			*data;
	t_lsttype		type;
	struct s_lst	*next;
}					t_lst;

size_t				lst_len(t_lst *l);
t_lst				*lst_new(void *data, t_lsttype type);
t_lst				*lst_split(void *p, size_t n1, void *match, size_t n2);
void				lst_add(t_lst **l, t_lst *new);
void				lst_seq(t_lst *l, void (*f) (void *, void *), void *ctxt);
void				lst_free(t_lst *lst);

#endif
