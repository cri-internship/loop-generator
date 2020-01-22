#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(240, 340, 970, "ones");
	double ***A = create_three_dim_double(70, 10, 490, "ones");
	double ***C = create_three_dim_double(190, 990, 730, "ones");

	for (int b = 5; b < 9; b++)
	  for (int a = 5; a < 68; a++)
	  {
	    
	     A[a][b][a]=C[a][b][a]-0.405;
	     A[a-5][b-5][a-5]=B[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]-B[a][b][a];
	     C[a+5][b+3][a+4]=B[a][b][a];
	    
	     double var_a=A[a][b][a]-0.21;
	     double var_b=A[a+2][b+1][a]/0.839;
	  }

    return 0;
}