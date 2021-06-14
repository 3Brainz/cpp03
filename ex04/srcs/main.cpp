#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <NinjaTrap.hpp>
#include <SuperTrap.hpp>

int main(void)
{
	FragTrap trapper("Trapper");
	ScavTrap slav("Slav");
	NinjaTrap ninja("Naing");
	SuperTrap super("banana");

	srand(time(NULL));
	trapper.meleeAttack("ciro");
	trapper.rangedAttack("luca");
	trapper.takeDamage(50);
	trapper.takeDamage(50);
	trapper.takeDamage(50);
	trapper.beRepaired(100);
	trapper.beRepaired(40);
	trapper.vaulthunter_dot_exe("eruto");
	trapper.vaulthunter_dot_exe("pat' t");
	trapper.vaulthunter_dot_exe("gianno");
	trapper.vaulthunter_dot_exe("farnco");
	trapper.vaulthunter_dot_exe("appoast");
	slav.meleeAttack("ciro");
	slav.rangedAttack("luca");
	slav.takeDamage(50);
	slav.takeDamage(50);
	slav.takeDamage(50);
	slav.beRepaired(100);
	slav.beRepaired(40);
	slav.challengeNewcomer("eruto");
	slav.challengeNewcomer("pat' t");
	slav.challengeNewcomer("gianno");
	ninja.meleeAttack("ciro");
	ninja.rangedAttack("luca");
	ninja.takeDamage(50);
	ninja.takeDamage(50);
	ninja.takeDamage(50);
	ninja.beRepaired(100);
	ninja.beRepaired(40);
	ninja.ninjaShoebox(trapper);
	ninja.ninjaShoebox(slav);
	ninja.ninjaShoebox(ninja);
	super.meleeAttack("piotta");
	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe("rammsteins");
}