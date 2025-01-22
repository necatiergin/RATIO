#include <ratio>
#include <iostream>

template<intmax_t NUM, intmax_t DEN>
std::ostream& operator<<(std::ostream& os, std::ratio<NUM, DEN> r)
{
	return os << NUM << " / " << DEN;
}

int main()
{
	std::cout << "peta   = " << std::peta{} << '\n';
	std::cout << "exa    = " << std::exa{} << '\n';
	std::cout << "tera   = " << std::tera{} << '\n';
	std::cout << "giga   = " << std::giga{} << '\n';
	std::cout << "mega   = " << std::mega{} << '\n';
	std::cout << "kilo   = " << std::kilo{} << '\n';
	std::cout << "hecto  = " << std::hecto{} << '\n';
	std::cout << "deca   = " << std::deca{} << '\n';
	std::cout << "deci   = " << std::deci{} << '\n';
	std::cout << "centi  = " << std::centi{} << '\n';
	std::cout << "milli  = " << std::milli{} << '\n';
	std::cout << "micro  = " << std::micro{} << '\n';
	std::cout << "nano   = " << std::nano{} << '\n';
	std::cout << "pico   = " << std::pico{} << '\n';
	std::cout << "femto  = " << std::femto{} << '\n';
	std::cout << "atto   = " << std::atto{} << '\n';
}
