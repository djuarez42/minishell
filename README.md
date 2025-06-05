```
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    project_structure.txt                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djuarez <djuarez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 19:18:02 by djuarez           #+#    #+#              #
#    Updated: 2025/05/28 19:18:05 by djuarez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

minishell/
├── Makefile
├── main.c
├── include/
│   ├── minishell.h
│   ├── lexer.h         ← encabezado del lexer/tokenizer
│   └── ...otros .h     ← puedes añadir headers por módulo si lo deseas
├── src/
│   ├── lexer/
│   │   ├── tokenizer.c      ← función que divide el input en tokens
│   │   └── lexer_utils.c    ← funciones auxiliares para el lexer
│   ├── parser/              ← analiza tokens y construye comandos
│   ├── executor/            ← ejecuta comandos, gestiona pipes/redirecciones
│   ├── builtins/            ← implementación de comandos built-in como `cd`, `echo`, etc.
│   ├── signals/             ← gestión de señales: Ctrl+C, Ctrl+\ etc.
│   └── utils/               ← funciones auxiliares comunes (memoria, strings, etc.)
├── libft/
```
