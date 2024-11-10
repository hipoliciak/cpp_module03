/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:56:27 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 22:41:26 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("Dominik");
	ScavTrap scavtrap("Karolina");

	claptrap.attack("enemy");

	scavtrap.attack("enemy");
	scavtrap.guardGate();

	return 0;
}
