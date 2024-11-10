/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:56:27 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 22:48:16 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clapTrap("Dominik");
	FragTrap fragTrap("Karolina");

	clapTrap.attack("Karolina");
	fragTrap.attack("Dominik");
	fragTrap.highFivesGuys();

	return 0;
}
