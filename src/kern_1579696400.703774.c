#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(450, "ones");
	double *D = create_one_dim_double(280, "ones");
	double **E = create_two_dim_double(170, 210, "ones");
	double **B = create_two_dim_double(440, 810, "ones");
	double ***C = create_three_dim_double(870, 50, 380, "ones");

	for (int c = 0; c < 807; c++)
	  for (int b = 0; b < 277; b++)
	    for (int a = 0; a < 277; a++)
	    {
	      
	      D[a]=D[a+3]*C[a][b][c]+0.252;
	      
	      B[a][b]=A[a]*E[a][b]/D[a];
	      B[a+3][b+3]=0.071;
	      
	      double var_a=A[a]+0.428;
	    }

    return 0;
}