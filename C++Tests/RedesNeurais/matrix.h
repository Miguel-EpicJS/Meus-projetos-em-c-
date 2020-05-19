#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <random>

class Matrix{
    private:
        int cols;
        int rows;
        

    public:
        Matrix(int cols, int rows)
        {
            this -> cols = cols;
            this -> rows = rows;
			int m[cols][rows];
			

            for (int i = 0; i < rows; i++)
            {

                
				for (int j = 0; j < cols; j++)
				{
					
					
					m[i][j] =random_generator();
					
				}
				

            }
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < cols; j++)
				{
					std::cout << m[i][j] << " ";
				}
				std::cout << "\n";
				
			}
			



        }
		int random_generator(){
    		std::random_device r;
    		std::default_random_engine e1(r());
   			std::uniform_int_distribution<int> uniform_dist(0, 100);
    		return uniform_dist(e1);
		}
		static void add(Matrix a , Matrix  b)
		{
			
		}



};

