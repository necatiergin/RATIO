#include <ratio>

int main()
{
	using namespace std;

	using two_third = ratio<2, 3>;
	using one_fifth = ratio<1, 5>;

	using ratio_result = ratio_add<two_third, one_fifth>;
	
	constexpr auto num = ratio_result::num;
	constexpr auto den = ratio_result::den;
}
