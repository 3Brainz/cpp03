# include <FragTrap.hpp>

/*constructors*/

FragTrap::FragTrap() :ClapTrap("fragTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
	this->commonInitializer();
}

FragTrap::FragTrap(std::string name) :ClapTrap(name, 100, 100, 100, 10, 1, 30, 20, 5)
{
	this->commonInitializer();
}

FragTrap::FragTrap(FragTrap const &toCopy) :ClapTrap(toCopy)
{}

FragTrap::~FragTrap()
{
	std::cout << name << " destroyed" << std::endl;
}

void	FragTrap::commonInitializer()
{
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
