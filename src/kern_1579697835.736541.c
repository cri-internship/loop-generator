#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(460, 680, 670, "zeros");
	double **B = create_two_dim_double(530, 700, "zeros");

	for (int b = 5; b < 680; b++)
	  for (int a = 5; a < 455; a++)
	  {
	    
	     B[a][b]=B[a-5][b-5]/0.793;
	    
	     A[a][b][a]=A[a+5][b][a+3]-0.619;
	    
	     B[a][b]=0.446;
	    
	     double var_a=B[a][b]-0.341;
	     double var_b=B[a+2][b+2]*0.18;
	    
	     A[a][b][a]=A[a][b][a]-B[a][b];
	     B[a][b]=A[a-2][b-3][a-4]/B[a][b];
	  }

    return 0;
}