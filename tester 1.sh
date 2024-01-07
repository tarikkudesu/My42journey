# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester 1.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamehri <tamehri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 19:52:31 by tamehri           #+#    #+#              #
#    Updated: 2024/01/07 20:00:19 by tamehri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'

INT_MIN=-3
INT_MAX=21344

arg=()

for i in $(seq 1 10); do
    while true; do
        num=$((RANDOM % (INT_MAX - INT_MIN + 1) + INT_MIN))
        if ! [[ ${arg[*]} =~ $num ]]; then
            break
        fi
    done
    arg+=($num)
    output=$(./push_swap ${arg[@]} | ./checker_Mac ${arg[@]})
    if [ "$output" == "OK" ]; then
        echo "${GREEN}OK${NC}"
    elif [ "$output" == "KO" ]; then
        echo "${RED}KO${NC}"
    fi
	sleep 0.1
done

for i in $(seq 10 500); do
    for j in $(seq 1 10); do
        while true; do
            num=$((RANDOM % (INT_MAX - INT_MIN + 1) + INT_MIN))
            if ! [[ ${arg[*]} =~ $num ]]; then
                break
            fi
        done
        arg+=($num)
    done
    output=$(./push_swap ${arg[@]} | ./checker_Mac ${arg[@]})
    if [ "$output" == "OK" ]; then
        echo "${GREEN}OK${NC}"
    elif [ "$output" == "KO" ]; then
        echo "${RED}KO${NC}"
    fi
	sleep 0.1
done
