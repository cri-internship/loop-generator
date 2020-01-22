#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(900, 250, 960, "ones");
	double **D = create_two_dim_double(890, 790, "ones");
	double **A = create_two_dim_double(960, 820, "ones");
	double ***C = create_three_dim_double(470, 910, 840, "ones");
	double *E = create_one_dim_double(140, "ones");

	for (int c = 2; c < 960; c++)
	  for (int b = 3; b < 245; b++)
	    for (int a = 3; a < 137; a++)
	    {
	      
	      A[a][b]=A[a-2][b-2]-E[a];
	      
	      E[a]=E[a-1]+0.129;
	      
	      E[a]=E[a+3]*0.566;
	      
	      B[a][b][c]=B[a+4][b+5][c]-0.274;
	      
	      E[a]=E[a+1]+C[a][b][c];
	      
	      A[a][b]=B[a][b][c]/0.027-D[a][b];
	      D[a][b]=B[a-3][b-3][c-2]*E[a]-C[a][b][c]+A[a][b];
	      
	      double var_a=A[a][b]+0.182;
	      double var_b=A[a-3][b-3]*0.159;
	    }

    return 0;
}