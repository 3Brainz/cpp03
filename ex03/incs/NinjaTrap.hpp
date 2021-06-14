#pragma once

#include	<iostream>
#include	<string>
#include	<ClapTrap.hpp>
#include	<ScavTrap.hpp>
#include	<FragTrap.hpp>

class NinjaTrap : public ClapTrap
{
public:
	/*constructors*/
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &toCopy);
	~NinjaTrap();
	/*actions*/
	void	ninjaShoebox(ScavTrap const & target) const;
	void	ninjaShoebox(FragTrap const & target) const;
	void	ninjaShoebox(NinjaTrap const & target) const;
private:
	void		commonInitializer(void);
};
