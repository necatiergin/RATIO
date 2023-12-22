#include <ratio>

int main()
{
	using namespace std;

	using two_third = ratio<2, 3>;
	using one_fifth = ratio<1, 5>;

	constexpr auto num = ratio_divide<two_third, one_fifth>::num;
	constexpr auto den = ratio_divide<two_third, one_fifth>::den;
}
