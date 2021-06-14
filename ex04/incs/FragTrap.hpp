#pragma once

#include	<ClapTrap.hpp>
#include	<iostream>
#include	<string>

class FragTrap : virtual public ClapTrap
{
public:
	/*constructors*/
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &toCopy);
	~FragTrap();
	/*actions*/
	void	vaulthunter_dot_exe(std::string const & target);
private:
	void	commonInitializer(void);
};
