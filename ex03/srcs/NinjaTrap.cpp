# include <NinjaTrap.hpp>

/*constructors*/

NinjaTrap::NinjaTrap() :ClapTrap("NinjaTrap", 60, 60, 120, 120, 1, 60, 5, 0)
{
	name = "ClapTrap";
	this->commonInitializer();
}

NinjaTrap::NinjaTrap(std::string name) :ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	this->commonInitializer();
}

NinjaTrap::NinjaTrap(NinjaTrap const &toCopy) : ClapTrap(toCopy)
{
	std::cout << name << " copied" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << " destroyed" << std::endl;
}

void	NinjaTrap::commonInitializer()
{
	std::cout << name << " is born as a Ninja boy" << std::endl;
}

/*actions*/

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) const
{
	std::cout << name << " is looking at a scav ..." << target.getName() << " is now in love with " << name << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) const
{
	std::cout << name << " is worried about frags, infact " << target.getName() << " explodes" << std::endl; 
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) const
{
	std::cout << name << " can 't see " << target.getName() << ", so they do actually nothing" << std::endl; 
}
