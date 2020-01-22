#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(370, 810, "ones");
	double ***C = create_three_dim_double(960, 690, 560, "ones");
	double ***B = create_three_dim_double(790, 860, 400, "ones");
	double *D = create_one_dim_double(830, "ones");
	double *E = create_one_dim_double(640, "ones");

	for (int c = 5; c < 400; c++)
	  for (int b = 4; b < 690; b++)
	    for (int a = 5; a < 366; a++)
	    {
	      
	      D[a]=D[a-5]+0.903;
	      
	      E[a]=E[a+4]-0.029;
	      
	      A[a][b]=A[a+4][b+4]/0.911;
	      
	      D[a]=E[a];
	      
	      C[a][b][c]=0.68;
	      C[a-4][b-1][c-5]=0.25;
	      
	      double var_a=B[a][b][c]+0.896;
	      double var_b=B[a][b-4][c-5]+0.82;
	    }

    return 0;
}