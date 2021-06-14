# include <ClapTrap.hpp>

/*constructors*/

ClapTrap::ClapTrap() : maxHP(100), maxEnergyP(100) ,meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	name = "ClapTrap";
	this->commonInitializer();
}

ClapTrap::ClapTrap(std::string name) : maxHP(100), maxEnergyP(100) , meleeAttackDmg(30), rangedAttackDmg(20), armorReduction(5)
{
	this->name = name;
	this->commonInitializer();
}

ClapTrap::ClapTrap(std::string name, long HP, long maxHP, long energyP, long maxEnergyP, int lv, int meleeAttackDmg, int rangedAttackDmg, int armorReduction)
{
	this->name = name;
	this->HP = HP;
	this->maxHP = maxHP;
	this->energyP = energyP;
	this->maxEnergyP = maxEnergyP;
	this->lv = lv;
	this->meleeAttackDmg = meleeAttackDmg;
	this->rangedAttackDmg = rangedAttackDmg;
	this->armorReduction = armorReduction;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy) : name(toCopy.name), maxEnergyP(toCopy.maxEnergyP), meleeAttackDmg(toCopy.meleeAttackDmg), rangedAttackDmg(toCopy.rangedAttackDmg), armorReduction(toCopy.armorReduction)
{
	std::cout << name << "copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " father destroyed " << std::endl;
}

void	ClapTrap::commonInitializer()
{
	HP = 100;
	energyP = 100;
	lv = 1;
	std::cout << name << " is born as a clap boy" << std::endl;
}

/*getters*/

std::string	ClapTrap::getName(void) const
{
	return(this->name);
}

/*actions*/

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " from distance, causing " << this->rangedAttackDmg << " problems" << std::endl;
}
void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->name << " attacks " << target << " core a core, causing " << this->meleeAttackDmg << " problems" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	long damage;

	damage = (amount - armorReduction > 0 ? amount - armorReduction : 0);
	HP = (HP - damage > 0 ? HP - damage : 0);
	std::cout << name << " took " << damage << " problems " << "and now has " << HP << " neurons remaining" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	long healing;
	long tempHP = HP;

	healing = (HP + amount >= maxHP ? maxHP - HP : amount);
	HP = (HP + healing);
	std::cout << name << " had " << tempHP << " neurons " << "but then he spoke with his bestie and now has " << HP << " neurons" << std::endl;
}

void	ClapTrap::vaulthunter_dot_exe(std::string const & target)
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
