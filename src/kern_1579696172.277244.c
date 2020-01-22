#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(540, 440, "ones");
	double **C = create_two_dim_double(870, 350, "ones");
	double ***E = create_three_dim_double(310, 840, 80, "ones");
	double *A = create_one_dim_double(220, "ones");
	double ***B = create_three_dim_double(600, 820, 810, "ones");

	for (int c = 3; c < 80; c++)
	  for (int b = 5; b < 346; b++)
	    for (int a = 3; a < 220; a++)
	    {
	      
	      E[a][b][c]=E[a][b-3][c-3]*0.701;
	      
	      C[a][b]=C[a][b-5]/0.957;
	      
	      D[a][b]=D[a][b+5]*E[a][b][c];
	      
	      A[a]=0.539;
	      A[a-3]=0.588;
	      
	      C[a][b]=0.171;
	    }

    return 0;
}