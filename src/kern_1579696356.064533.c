#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(380, 580, "ones");
	double *B = create_one_dim_double(630, "ones");
	double *A = create_one_dim_double(420, "ones");
	double ***C = create_three_dim_double(970, 70, 550, "ones");
	double *E = create_one_dim_double(700, "ones");

	for (int c = 0; c < 580; c++)
	  for (int b = 5; b < 380; b++)
	    for (int a = 5; a < 380; a++)
	    {
	      
	      B[a]=B[a-2]-0.727;
	      
	      A[a]=A[a-3]*0.498;
	      
	      D[a][b]=D[a-2][b]+E[a]*A[a];
	      
	      E[a]=E[a-5]*0.337;
	      
	      E[a]=E[a+1]*C[a][b][c];
	      
	      B[a]=D[a][b];
	    }

    return 0;
}