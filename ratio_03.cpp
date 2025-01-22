#include <ratio>

int main()
{
	using std::ratio;

	constexpr auto b = std::ratio_greater_v<ratio<133, 11357>, ratio<135, 11397>>;
}
