# include <ScavTrap.hpp>

/*constructors*/

ScavTrap::ScavTrap() : maxHP(100), maxEnergyP(50) ,meleeAttackDmg(20), rangedAttackDmg(15), armorReduction(3)
{
	name = "ClapTrap";
	this->commonInitializer();
}

ScavTrap::ScavTrap(std::string name) : maxHP(100), maxEnergyP(50) , meleeAttackDmg(20), rangedAttackDmg(15), armorReduction(3)
{
	this->name = name;
	this->commonInitializer();
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " boom" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &frag) : name(frag.name), HP(frag.HP), maxHP(frag.maxHP), maxEnergyP(frag.maxEnergyP), meleeAttackDmg(frag.meleeAttackDmg), rangedAttackDmg(frag.rangedAttackDmg), armorReduction(frag.armorReduction)
{	
	std::cout << " copy executed" << std::endl;
}

ScavTrap&	ScavTrap::operator = (const ScavTrap & frag)
{
	std::cout << "i did what i had to do" << std::endl;
	if (this == &frag)
	{
		return (*this);
	}
	else
	{
		this->name = frag.name;
		this->HP = frag.HP;
		this->maxHP = frag.maxHP;
		this->energyP = frag.energyP;
		this->maxEnergyP = frag.maxEnergyP;
		this->lv = frag.lv;
		this->meleeAttackDmg = frag.meleeAttackDmg;
		this->rangedAttackDmg = frag.rangedAttackDmg;
		this->armorReduction = frag.armorReduction;	
		return(*this);
	}
}

void	ScavTrap::commonInitializer()
{
	HP = 100;
	energyP = 50;
	lv = 1;
	std::cout << name << " is born as a scav boy" << std::endl;
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
