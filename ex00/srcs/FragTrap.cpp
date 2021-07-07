# include <FragTrap.hpp>

/*constructors*/

FragTrap::FragTrap() : maxHP(100), maxEnergyP(100) ,meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	name = "ClapTrap";
	this->commonInitializer();
}

FragTrap::FragTrap(std::string name) : maxHP(100), maxEnergyP(100) , meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	this->name = name;
	this->commonInitializer();
}

FragTrap::~FragTrap()
{
	std::cout << "frag destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : name(frag.name), HP(frag.HP), maxHP(frag.maxHP), maxEnergyP(frag.maxEnergyP), meleeAttackDmg(frag.meleeAttackDmg), rangedAttackDmg(frag.rangedAttackDmg), armorReduction(frag.armorReduction)
{	
	std::cout << "copy executed" << std::endl;
}

FragTrap&	FragTrap::operator = (const FragTrap & frag)
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

void	FragTrap::commonInitializer()
{
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
