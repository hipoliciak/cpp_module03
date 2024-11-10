/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:56:27 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 23:10:15 by dmodrzej         ###   ########.fr       */
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

	diamondTrap.whoAmI();

	return 0;
}
