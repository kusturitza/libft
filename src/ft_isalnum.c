/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydidenko <ydidenko@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 13:28:33 by ydidenko      #+#    #+#                 */
/*   Updated: 2023/10/17 19:25:37 by ydidenko      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/*
** The isalnum() function tests for any character for which
** isalpha(3) or isdigit(3) is true.  The value of the argument must be
** representable as an unsigned char or the value of EOF.
*/

bool	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || \
		(c >= 'a' && c <= 'z') || \
		(c >= 'A' && c <= 'Z'))
		return (true);
	else
		return (false);
}
