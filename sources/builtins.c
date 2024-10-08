/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:07:11 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/09/02 16:50:28 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

bool	is_builtin(char *command)
{
	if (!command)
		return (false);
	if (!ft_strncmp(command, "echo", 5) || !ft_strncmp(command, "cd", 3)
		|| !ft_strncmp(command, "pwd", 4) || !ft_strncmp(command, "export", 7)
		|| !ft_strncmp(command, "unset", 6) || !ft_strncmp(command, "env", 4)
		|| !ft_strncmp(command, "exit", 5))
		return (true);
	return (false);
}

int	builtin_exec(t_minishell **minishell, t_ast	*node)
{
	if (!ft_strncmp(node->expanded_cmd[0], "echo", 5))
		return (exec_echo(node->expanded_cmd));
	if (!ft_strncmp(node->expanded_cmd[0], "cd", 3))
		return (exec_cd(node->expanded_cmd,
				&(*minishell)->env_copy));
	if (!ft_strncmp(node->expanded_cmd[0], "pwd", 4))
		return (exec_pwd(node->expanded_cmd));
	if (!ft_strncmp(node->expanded_cmd[0], "export", 7))
		return (exec_export(node->expanded_cmd,
				&(*minishell)->env_copy));
	if (!ft_strncmp(node->expanded_cmd[0], "unset", 6))
		return (exec_unset(node->expanded_cmd,
				&(*minishell)->env_copy));
	if (!ft_strncmp(node->expanded_cmd[0], "env", 4))
		return (exec_env(node->expanded_cmd,
				(*minishell)->env_copy));
	if (!ft_strncmp(node->expanded_cmd[0], "exit", 5))
		exec_exit(node->expanded_cmd, minishell);
	return (-1);
}
