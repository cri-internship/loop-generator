#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(890, 420, 960, "random");
	double *B = create_one_dim_double(910, "random");
	double ***C = create_three_dim_double(160, 550, 160, "random");

	for (int c = 0; c < 958; c++)
	  for (int b = 0; b < 415; b++)
	    for (int a = 5; a < 889; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+3][c+1]+0.789;
	      
	      B[a]=C[a][b][c]-A[a][b][c];
	      B[a-5]=0.013/C[a][b][c];
	      
	      A[a][b][c]=B[a]+C[a][b][c];
	      
	      double var_a=B[a]/0.34;
	      double var_b=B[a-2]/0.003;
	    }

    return 0;
}