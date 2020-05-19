#include <iostream>
#include "neurais.h"

using namespace std;

int main()
{

	double training_sets[4][2] =
	{

		{0,0},
		{1,0},
		{0,1},
		{1,1}

	};

	double desired[4] = {0,0,0,1};

	Neural net(2);

	int iterations = 0;

	do
	{

		for(int i = 0; i < 4; i++)
		{
			net.train(training_sets[i], desired[i]);

//			printf("desired: %.1f -> output: %.10f\n", desired[i], net.run(training_sets[i]));
		}
		iterations++;

	}while(iterations < 1000);



	cout << "Treinamento completo!!!" << endl;

	cout << "\n ====== TEST =======\n";

	double new_input[2] = {1,1};

	string result = (net.run(new_input) <  0.5)? "FALSE" : "TRUE";

	cout << "\n" << result << endl;

	return 0;
}

