#pragma once

#include	<iostream>
#include	<string>

class ClapTrap
{
public:
	/*constructors*/
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, long HP, long maxHP, long energyP, long maxEnergyP, int lv, int meleeAttackDmg, int rangedAttackDmg, int armorReduction);
	ClapTrap(ClapTrap const &toCopy);
	~ClapTrap();
	ClapTrap &	operator = (const ClapTrap & toCopy);
	/*actions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	std::string getName(void) const;
	void	printStats(void);
protected:
	/*basic stats*/
	std::string		name;
	long			HP;
	long			maxHP;
	long			energyP;
	long			maxEnergyP;
	int				lv;
	/*attacks*/
	int		meleeAttackDmg;
	int		rangedAttackDmg;
	int		armorReduction;
	/*private funcs*/
	void		commonInitializer();
};
