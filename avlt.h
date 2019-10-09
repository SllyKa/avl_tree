/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avlt.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrandon <gbrandon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:37:16 by gbrandon          #+#    #+#             */
/*   Updated: 2019/10/09 22:33:57 by gbrandon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVLT_H
# define AVLT_H
#include <unistd.h>

typedef struct	s_avlt
{
	int					height;
	struct s_avlt		*left;
	struct s_avlt		*right;
	void		*item;
}				t_avlt;

t_avlt      *create_node(void *);
void		add_node(t_avlt **, void *, int (*cmp)(void *, void *));
int			height(t_avlt *);
void		set_height(t_avlt *);
void		pre_order(t_avlt *, void (*appt)(void *));
void		in_order(t_avlt *, void (*appt)(void *));
void		post_order(t_avlt *, void (*appt)(void *));
void        pre_order_gfz(t_avlt *, void (*appt)(void *), int);
void        gfz_write_init(int);
void        gfz_write_end(int);
int			balancef(t_avlt *);
void		balance(t_avlt **);
t_avlt		*rotater(t_avlt *);
t_avlt		*rotatel(t_avlt *);
void		remove_n(t_avlt **, void *, int (*cmp)(void *, void *));
void		appt(void *);
int			tr_int_cmp(void *, void *);
t_avlt		*add_ar_to_tree(int *, size_t);

#endif