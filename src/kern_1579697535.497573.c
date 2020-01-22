#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(630, "ones");
	double *E = create_one_dim_double(440, "ones");
	double **C = create_two_dim_double(540, 230, "ones");
	double ***D = create_three_dim_double(10, 640, 270, "ones");
	double *B = create_one_dim_double(10, "ones");

	for (int c = 0; c < 265; c++)
	  for (int b = 0; b < 640; b++)
	    for (int a = 2; a < 8; a++)
	    {
	      
	      D[a][b][c]=0.123;
	      D[a+2][b][c+5]=0.126;
	      
	      A[a]=B[a];
	      A[a-2]=E[a]*D[a][b][c]/C[a][b]+B[a];
	    }

    return 0;
}