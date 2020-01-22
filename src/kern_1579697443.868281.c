#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(370, 400, 20, "ones");
	double ***B = create_three_dim_double(880, 410, 940, "ones");
	double *A = create_one_dim_double(430, "ones");

	for (int c = 4; c < 20; c++)
	  for (int b = 3; b < 400; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      C[a][b][c]=0.651;
	      C[a-2][b-3][c-4]=0.553;
	      
	      C[a][b][c]=B[a][b][c]/C[a][b][c]*A[a];
	      B[a][b][c]=B[a-4][b-3][c-2]/C[a][b][c];
	      
	      double var_a=B[a][b][c]-0.58;
	      double var_b=B[a+5][b+1][c+5]-0.16;
	    }

    return 0;
}