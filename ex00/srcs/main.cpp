#include <FragTrap.hpp>

int main(void)
{
	FragTrap trapper("Trapper");

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
}