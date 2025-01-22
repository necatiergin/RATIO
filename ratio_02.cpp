#include <ratio>

int main()
{
	using two_third = std::ratio<2, 3>;
	using one_fifth = std::ratio<1, 5>;

	constexpr auto num = std::ratio_divide<two_third, one_fifth>::num;
	constexpr auto den = std::ratio_divide<two_third, one_fifth>::den;
}
