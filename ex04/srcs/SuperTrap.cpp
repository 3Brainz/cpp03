# include <SuperTrap.hpp>

/*constructors*/

SuperTrap::SuperTrap() :ClapTrap("SuperTrap", 100, 100, 50, 50, 1, 20, 15, 3), FragTrap(), NinjaTrap()
{
	this->commonInitializer();
}

SuperTrap::SuperTrap(std::string name) :ClapTrap(name, 100, 100, 120, 120 , 1, 60, 20, 5) , FragTrap(name), NinjaTrap(name)
{
	this->commonInitializer();
}

SuperTrap::SuperTrap(SuperTrap const &toCopy) :ClapTrap(toCopy)
{}

SuperTrap::~SuperTrap()
{
	std::cout << name << " destroyed" << std::endl;
}

void	SuperTrap::commonInitializer()
{
	std::cout << name << " is born as a Super boy" << std::endl;
}
