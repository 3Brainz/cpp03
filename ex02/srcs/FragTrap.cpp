# include <FragTrap.hpp>

/*constructors*/

FragTrap::FragTrap() :ClapTrap()
{
	name = "ClapTrap";
	this->commonInitializer();
}

FragTrap::FragTrap(std::string name) :ClapTrap()
{
	this->name = name;
	this->commonInitializer();
}

FragTrap::~FragTrap()
{
	std::cout << name << "destroyed" << std::endl;
}

void	FragTrap::commonInitializer()
{
	HP = 100;
	energyP = 100;
	maxHP = 100;
	maxEnergyP = 100;
	meleeAttackDmg = 30;
	rangedAttackDmg = 20;
	armorReduction = 5;
	lv = 1;
	std::cout << name << " is born as a clap boy" << std::endl;
}

/*actions*/

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
