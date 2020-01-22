#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(680, 700, 80, "ones");
	double **B = create_two_dim_double(860, 810, "ones");
	double ***D = create_three_dim_double(120, 540, 790, "ones");
	double **A = create_two_dim_double(560, 910, "ones");
	double *E = create_one_dim_double(850, "ones");

	for (int c = 3; c < 79; c++)
	  for (int b = 3; b < 695; b++)
	    for (int a = 1; a < 675; a++)
	    {
	      
	      E[a]=A[a][b];
	      E[a]=E[a]*C[a][b][c]/D[a][b][c];
	      
	      C[a][b][c]=C[a][b-3][c-3]+0.329;
	      
	      E[a]=E[a+5]+0.992;
	      
	      C[a][b][c]=0.668;
	    }

    return 0;
}