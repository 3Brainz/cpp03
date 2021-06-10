# include <ScavTrap.hpp>

/*constructors*/

ScavTrap::ScavTrap() : maxHP(100), maxEnergyP(50) ,meleeAttackDmg(20), rangedAttackDmg(15), armorReduction(3)
{
	this->commonInitializer();
}

ScavTrap::ScavTrap(std::string name) : maxHP(100), maxEnergyP(50) , meleeAttackDmg(20), rangedAttackDmg(15), armorReduction(3)
{
	this->name = name;
	this->commonInitializer();
}

ScavTrap::~ScavTrap()
{

}

void	ScavTrap::commonInitializer()
{
	name = "ClapTrap";
	HP = 100;
	energyP = 50;
	lv = 1;
	std::cout << name << "is born as a scav boy" << std::endl;
}

/*actions*/

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " offends " << target << " from his house, causing " << this->rangedAttackDmg << " questions" << std::endl;
}
void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " offends " << target << " like a ninja hugger, causing " << this->meleeAttackDmg << " questions" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	long damage;

	damage = (amount - armorReduction > 0 ? amount - armorReduction : 0);
	HP = (HP - damage > 0 ? HP - damage : 0);
	std::cout << name << " felt " << damage << " questions go away " << "and now has " << HP << " questions remaining" << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	long healing;
	long tempHP = HP;

	healing = (HP + amount >= maxHP ? maxHP - HP : amount);
	HP = (HP + healing);
	std::cout << name << " had " << tempHP << " questions " << "but then he studied and now has " << HP << " questions" << std::endl;
}

void	ScavTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string moves[5] = {" reads a book", " puts speranza in his headphones", " ", " looks in another direction", " does nothing"};

	(void)maxEnergyP;
	if (energyP >= 25)
	{
		energyP -= 25;
		std::cout << name << moves[rand() % 5] << " dealing " << rand() % 10 + 25 << " knowledge damage at " << target <<std::endl;
	}
	else
	{
		std::cout << name << "is out of energy ... no more stamina bro. Fai schifo correttore. Puzzi ma non te lo dico perche spero mi farai passare il progetto1, pero sei la persona che odio di piu in 42. Tutti i tuoi amici ti detestano, stanno con te solo per i tuoi soldi. Hai anche il pene piccolo." << std::endl;
	}
}
