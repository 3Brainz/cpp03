#pragma once

#include	<iostream>
#include	<string>

class ScavTrap
{
public:
	/*constructors*/
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap &frag);
	ScavTrap &	operator = (const ScavTrap & toCopy);
	/*actions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
private:
	/*basic stats*/
	std::string		name;
	long			HP;
	long			maxHP;
	long			energyP;
	long			maxEnergyP;
	int				lv;
	/*attacks*/
	int				meleeAttackDmg;
	int				rangedAttackDmg;
	int				armorReduction;
	/*private funcs*/
	void		commonInitializer();
};
