# include <ScavTrap.hpp>

/*constructors*/

ScavTrap::ScavTrap() : ClapTrap("scavTrap", 100, 100, 50, 50, 1, 20, 15, 3)
{
	this->commonInitializer();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	this->commonInitializer();
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " destroyed" << std::endl;
}

void	ScavTrap::commonInitializer(void)
{
	std::cout << name << " is born as a scav boy" << std::endl;
}

/*actions*/

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string moves[5] = {" to read a book", " in a pony race", " to stare at each other", " to swim in tears", " in a banana fight"};

	(void)maxEnergyP;
	if (energyP >= 25)
	{
		energyP -= 25;
		std::cout << name << " challenges " << target << moves[rand() % 5] << " a pro move" << std::endl;
	}
	else
	{
		std::cout << name << "is out of energy ... no more stamina bro. Fai schifo correttore. Puzzi ma non te lo dico perche spero mi farai passare il progetto1, pero sei la persona che odio di piu in 42. Tutti i tuoi amici ti detestano, stanno con te solo per i tuoi soldi. Hai anche il pene piccolo." << std::endl;
	}
}
