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
	const	long	maxHP;
	long			energyP;
	const	long	maxEnergyP;
	int				lv;
	/*attacks*/
	const	int		meleeAttackDmg;
	const	int		rangedAttackDmg;
	const	int		armorReduction;
	/*private funcs*/
	void		commonInitializer();
};
