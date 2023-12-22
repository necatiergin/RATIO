#include <ratio>

int main()
{
	using namespace std;

	constexpr auto b = ratio_greater_v<ratio<133, 11357>, ratio<135, 11397>>;

}
