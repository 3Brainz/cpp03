#pragma once

#include	<iostream>
#include	<string>
#include	<ClapTrap.hpp>
#include	<FragTrap.hpp>
#include	<NinjaTrap.hpp>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	/*constructors*/
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &toCopy);
	~SuperTrap();
	/*actions*/
private:
	void		commonInitializer(void);
};
