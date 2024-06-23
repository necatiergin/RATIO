#include <ratio>
#include <iostream>

template<intmax_t NUM, intmax_t DEN>
std::ostream& operator<<(std::ostream& os, std::ratio<NUM, DEN> r)
{
	return os << NUM << " / " << DEN;
}

int main()
{
	using namespace std;
	cout << "peta   = " << peta{} << '\n';
	cout << "exa    = " << exa{} << '\n';
	cout << "tera   = " << tera{} << '\n';
	cout << "giga   = " << giga{} << '\n';
	cout << "mega   = " << mega{} << '\n';
	cout << "kilo   = " << kilo{} << '\n';
	cout << "hecto  = " << hecto{} << '\n';
	cout << "deca   = " << deca{} << '\n';
	cout << "deci   = " << deci{} << '\n';
	cout << "centi  = " << centi{} << '\n';
	cout << "milli  = " << milli{} << '\n';
	cout << "micro  = " << micro{} << '\n';
	cout << "nano   = " << nano{} << '\n';
	cout << "pico   = " << pico{} << '\n';
	cout << "femto  = " << femto{} << '\n';
	cout << "atto   = " << atto{} << '\n';
}
