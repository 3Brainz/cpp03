#pragma once

#include	<iostream>
#include	<string>

class FragTrap
{
public:
	/*constructors*/
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap &frag);
	FragTrap &	operator = (const FragTrap & toCopy);
	/*actions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
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
