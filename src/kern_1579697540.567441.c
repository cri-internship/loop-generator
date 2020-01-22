#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(500, 970, 80, "zeros");
	double *B = create_one_dim_double(470, "zeros");

	for (int b = 2; b < 965; b++)
	  for (int a = 4; a < 467; a++)
	  {
	    
	     B[a]=B[a+2]-0.349;
	    
	     B[a]=0.385;
	    
	     B[a]=A[a][b][a]/B[a];
	     A[a][b][a]=A[a+1][b+5][a+4]+0.218;
	    
	     double var_a=A[a][b][a]-0.51;
	     double var_b=A[a-4][b-2][a-4]*0.931;
	  }

    return 0;
}