/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djuarez <djuarez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:28:28 by djuarez           #+#    #+#             */
/*   Updated: 2025/06/04 19:13:47 by djuarez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
# define LEXER_H

# include <stdlib.h>
# include <stdio.h>

//Define token types
typedef enum e_token_type
{
	TOKEN_WORD,// normal word
	TOKEN_PIPE,// pipe '|'
	TOKEN_REDIRECT_IN,// <
	TOKEN_REDIRECT_OUT,// >
	TOKEN_HEREDOC,// <<
	TOKEN_APPEND,// >>
	TOKEN_EOF,// end of file /end of input maker
}	t_token_type;

//Token structure
typedef struct s_token
{
	t_token_type	type;
	char			*value;
	struct s_token	*next;
}	t_token;

//(Tokenize/lexer)utils
char	**tokenize_input(const char *input);
int		is_quote(char c);
int		is_operator(char c);
int		operator_len(const char *s);
int		token_len(const char *s);
char	*next_token(const char *s);
void	free_tokens(char **tokens, int count);
int		is_blank(const char *s);
int		count_tokens(const char *s);
int		fill_tokens(const char *input, char **tokens);
char	*handle_quotes(const char *s, int i);
char	*extract_word(const char *s, int i);
int		next_token_len(const char *s);
int		next_token_and_len(const char *s, char **token);

#endif
