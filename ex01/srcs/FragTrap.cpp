# include <FragTrap.hpp>

/*constructors*/

FragTrap::FragTrap() : maxHP(100), maxEnergyP(100) ,meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	this->commonInitializer();
}

FragTrap::FragTrap(std::string name) : maxHP(100), maxEnergyP(100) , meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	this->name = name;
	this->commonInitializer();
}

FragTrap::~FragTrap()
{

}

void	FragTrap::commonInitializer()
{
	name = "ClapTrap";
	HP = 100;
	energyP = 100;
	lv = 1;
	std::cout << name << "is born as a clap boy" << std::endl;
}

/*actions*/

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " from distance, causing " << this->rangedAttackDmg << " problems" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " core a core, causing " << this->meleeAttackDmg << " problems" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	long damage;

	damage = (amount - armorReduction > 0 ? amount - armorReduction : 0);
	HP = (HP - damage > 0 ? HP - damage : 0);
	std::cout << name << " took " << damage << " problems " << "and now has " << HP << " neurons remaining" << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	long healing;
	long tempHP = HP;

	healing = (HP + amount >= maxHP ? maxHP - HP : amount);
	HP = (HP + healing);
	std::cout << name << " had " << tempHP << " neurons " << "but then he spoke with his bestie and now has " << HP << " neurons" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string moves[5] = {" moves like jagger", " sips a huge sipe from his coke and burps", " prays the sun", " looks in another direction", " does nothing"};

	(void)maxEnergyP;
	if (energyP >= 25)
	{
		energyP -= 25;
		std::cout << name << moves[rand() % 5] << " dealing " << rand() % 10 + 25 << " wonderfulness damage at " << target <<std::endl;
	}
	else
	{
		std::cout << name << "is out of energy ... no more stamina bro" << std::endl;
	}
}
