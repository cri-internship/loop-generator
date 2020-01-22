#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(650, "zeros");
	double **B = create_two_dim_double(950, 870, "zeros");
	double ***A = create_three_dim_double(840, 460, 320, "zeros");

	for (int b = 3; b < 455; b++)
	  for (int a = 3; a < 645; a++)
	  {
	    
	     C[a]=C[a+5]+0.295;
	    
	     B[a][b]=0.063;
	     B[a][b+3]=0.737;
	    
	     A[a][b][a]=0.221;
	     A[a-2][b-3][a-3]=0.894;
	    
	     A[a][b][a]=0.439;
	    
	     double var_a=A[a][b][a]/0.652;
	     double var_b=A[a+4][b+5][a]-0.315;
	  }

    return 0;
}