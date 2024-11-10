/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:56:27 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 23:20:44 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clapTrap("Dominik");
	DiamondTrap diamondTrap("Karolina");

	clapTrap.attack("Karolina");
	diamondTrap.attack("Dominik");

	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();

	return 0;
}
