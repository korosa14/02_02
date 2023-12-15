#include <stdio.h>

template<typename X, typename X2>
//
class Namber
{
public:

	X Nanber;
	X2 Nanber2;

	Namber(X Nanber, X2 Nanber2) : Nanber(Nanber), Nanber2(Nanber2) {}

	X Min(X a, X2 b)
	{
		if (a < b)
		{
			return static_cast<X>(a);
		}
		else
		{
			return static_cast<X2>(b);
		}
	}

};

int main()
{
	Namber<int, int> a1(20, 60);
	Namber<float, float> a2(20, 60);
	Namber<double, double> a3(20, 60);
	Namber<int, float> a4(20, 60);
	Namber<float, double> a5(20, 60);
	Namber<double, int> a6(20, 60);


	printf(" int,int : %d\n", a1.Min(1, 15));
	printf(" float,float : %f\n", a2.Min(4.0, 12.0));
	printf(" double,double : %lf\n", a3.Min(2.0, 6.0));
	printf(" int, float : %d\n", a4.Min(5, 13.0));
	printf(" float, double : %f\n", a5.Min(23.0, 43.0));
	printf(" double, int : %lf\n", a6.Min(56.0, 33));

	return 0;
}