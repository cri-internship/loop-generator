#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(910, 260, 540, "zeros");
	double **B = create_two_dim_double(930, 540, "zeros");

	for (int b = 1; b < 257; b++)
	  for (int a = 4; a < 907; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-1][a-4]/0.473;
	    
	     A[a][b][a]=A[a-1][b][a]-B[a][b];
	    
	     B[a][b]=B[a-4][b]*0.217;
	    
	     double var_a=A[a][b][a]/0.291;
	     double var_b=A[a+3][b+3][a+3]-0.417;
	  }

    return 0;
}