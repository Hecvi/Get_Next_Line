/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <klaurine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:05:51 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/21 20:37:26 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include "libft/libft.h"
# define FD_MAX 4864
# define BUFF_SIZE 9999

int		get_next_line(const int fd, char **line);

#endif
