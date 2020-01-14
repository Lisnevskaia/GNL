/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:56:35 by ccred             #+#    #+#             */
/*   Updated: 2019/10/24 13:57:11 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_arr
{
	int				fd;
	char			*residue;
	struct s_arr	*next;
}					t_arr;

t_arr				*create_t_arr(const int fd);
char				*cheak_residue(char **p_n, char *residue);
int					get_line(const int fd, char **line, char *residue);
int					get_next_line(const int fd, char **line);

#endif
