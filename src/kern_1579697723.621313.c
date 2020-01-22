#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(390, "random");
	float **D = create_two_dim_float(580, 790, "random");
	float ***B = create_three_dim_float(800, 250, 70, "random");
	float **A = create_two_dim_float(650, 830, "random");
	float ***C = create_three_dim_float(770, 720, 590, "random");

	for (int b = 0; b < 830; b++)
	  for (int a = 1; a < 650; a++)
	  {
	    
	     B[a][b][a]=A[a][b]+D[a][b];
	     E[a]=A[a-1][b]*B[a][b][a]/C[a][b][a]-E[a]+0.657;
	  }

    return 0;
}