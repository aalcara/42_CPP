/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:27:54 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/30 15:16:56 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string a_type);
	~Weapon(void);
	const std::string	&getType(void);
	void	setType(std::string a_type);
};

#endif
