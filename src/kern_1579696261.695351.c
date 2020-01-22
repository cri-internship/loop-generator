#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(130, 790, "zeros");
	double ***B = create_three_dim_double(300, 840, 400, "zeros");

	for (int b = 5; b < 840; b++)
	  for (int a = 5; a < 300; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-2][a-4]-0.164;
	    
	     A[a][b]=B[a][b][a]+A[a][b];
	     B[a][b][a]=B[a][b-5][a-3]*0.26;
	    
	     double var_a=B[a][b][a]-0.562;
	     double var_b=B[a-4][b-4][a-5]-0.124;
	  }

    return 0;
}