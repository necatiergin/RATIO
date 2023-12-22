#include <ratio>

int main()
{
	using one_third = std::ratio<1, 3>;
	using two_fifth = std::ratio<2, 5>;
	using sum = typename std::ratio_add<one_third, two_fifth>::type;
	constexpr auto num = sum::num; //11
	constexpr auto den = sum::den; //15
}
