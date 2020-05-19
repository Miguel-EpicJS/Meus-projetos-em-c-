#include <iostream>
#include <stdlib.h>
#include <math.h>

class Neural{

	private:
		double* weights;
		double bias;
		int SIZE;

	public:
		Neural(int size){
		this-> SIZE = size;
		this-> weights = (double*)malloc(sizeof(double) *size);

		for(int i = 0 ; i < size; i++)
		{
			this -> weights[i] = (double) rand()  / RAND_MAX;

			printf("w: %.10f\n", this-> weights[i]);

		}

		this -> bias  = (double) rand() / RAND_MAX;
		printf("b: %.10f\n", this->bias);

	}

	double sigmoid(double x)
	{


		return  1 /( 1 + exp(-x));
	}

	double run(double* inputs)
	{

		double sum = 0.0;

		for (int i = 0 ; i < this->SIZE; i++)
		{

			sum += (inputs[i] * this -> weights[i]);
		}
		sum += this-> bias;

		return this->sigmoid(sum);

	}
	double train(double* inputs, double desired)
	{
		double y = this->run(inputs);

		for(int i = 0; i < this ->SIZE; i++)
		{

			this -> weights[i] += (desired - y) * inputs[i];

		}
		this-> bias += (desired - y);
	}

};
