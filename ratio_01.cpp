#include <ratio>

int main()
{
	using std::ratio;

	using two_third = ratio<2, 3>;
	using one_fifth = ratio<1, 5>;

	using ratio_result = std::ratio_add<two_third, one_fifth>;

	constexpr auto num = ratio_result::num;
	constexpr auto den = ratio_result::den;
}
