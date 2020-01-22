#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(810, "zeros");
	double ***B = create_three_dim_double(420, 550, 660, "zeros");
	double **D = create_two_dim_double(810, 680, "zeros");
	double ***C = create_three_dim_double(160, 40, 200, "zeros");
	double ***E = create_three_dim_double(560, 440, 650, "zeros");

	for (int b = 0; b < 806; b++)
	  for (int a = 0; a < 806; a++)
	  {
	    
	     A[a]=A[a+4]-D[a][b]*E[a][b][a]+B[a][b][a]/C[a][b][a];
	  }

    return 0;
}