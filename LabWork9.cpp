#include <iostream>
template <typename T>
T *minimax ( T *Array, size_t N )
{
	size_t MaxInd=0;
	size_t MinInd=0;
	static T Values[2];
	for ( size_t i=0;i<N;i++ )
	{
		if ( Array[i]<Array[MinInd] )
		{
			MinInd=i;
		}
		if ( Array[i]>Array[MaxInd] )
		{
			MaxInd=i;
		}
	}
	Values[0]=Array[MaxInd];
	Values[1]=Array[MinInd];
	return Values;
}
int main()
{
	int FirstArray[]={ 1, 5, 7, 2, 3, 1, 9 };
	double SecondArray[]={ 1.2, 1.6, 5.1, 4.8, 5.9 };
	char ThirdArray[]={ 'a', 'b', 'e', 'm', 'z' };
	std::cout <<"First: max is " << *minimax( FirstArray, 7 )
			<< " and min is " << *( minimax( FirstArray, 7 ) + 1) << std::endl
		  <<"Second: max is " << *minimax( SecondArray, 5 )
		  	<< " and min is " << *( minimax( SecondArray, 5 ) + 1) << std::endl
		  <<"Third: max is " <<  *minimax( ThirdArray, 5 )
		  	<< " and min is " << *( minimax( ThirdArray, 5 ) + 1) << std::endl;

	return 0;
}
