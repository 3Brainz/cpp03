#pragma once

#include	<iostream>
#include	<string>
#include	<ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
public:
	/*constructors*/
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	/*actions*/
	void	challengeNewcomer(std::string const & target);
private:
	void		commonInitializer(void);
};
