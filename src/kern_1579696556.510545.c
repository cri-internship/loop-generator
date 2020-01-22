#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(340, 470, 780, "random");
	double **B = create_two_dim_double(810, 580, "random");
	double **A = create_two_dim_double(990, 510, "random");

	for (int c = 4; c < 780; c++)
	  for (int b = 3; b < 470; b++)
	    for (int a = 4; a < 340; a++)
	    {
	      
	      B[a][b]=B[a-4][b-1]-0.904;
	      
	      double var_a=C[a][b][c]*0.313;
	      double var_b=C[a][b-3][c-4]-0.501;
	      
	      B[a][b]=B[a][b]*A[a][b]/C[a][b][c];
	      A[a][b]=B[a+2][b+5]/A[a][b];
	    }

    return 0;
}