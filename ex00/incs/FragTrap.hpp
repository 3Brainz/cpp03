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
	FragTrap(const FragTrap &frag);
	/*actions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	FragTrap&	operator = (const FragTrap & frag);
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
