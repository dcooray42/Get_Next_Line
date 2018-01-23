/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcooray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:21:05 by dcooray           #+#    #+#             */
/*   Updated: 2016/12/19 08:42:50 by dcooray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/includes/libft.h"

# define BUFF_SIZE	6

typedef struct	s_gnl
{
	char	*buf;
	int		ret;
	int		i;
	int		nl;
	int		fd;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
