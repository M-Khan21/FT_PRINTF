/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makhan <makhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:46:25 by makhan            #+#    #+#             */
/*   Updated: 2023/05/23 22:52:26 by makhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int ft_print_decimal(float c)
{

}*/

#include <unistd.h>

void printDecimal(double number) {
    char buffer[20];  // Assuming the number will not exceed 20 digits
    int index = 0;

    if (number == 0) {
        write(STDOUT_FILENO, "0", 1);
        return;
    }

    if (number < 0) {
        write(STDOUT_FILENO, "-", 1);
        number = -number;
    }

    while (number > 0) {
        buffer[index++] = '0' + (number % 10);
        number /= 10;
    }

    for (int i = index - 1; i >= 0; i--) {
        write(STDOUT_FILENO, &buffer[i], 1);
    }
}
int main() {
    int number = 12345.9;
    printDecimal(number);
    return 0;
}

