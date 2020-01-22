#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(560, 40, 600, "ones");
	double **B = create_two_dim_double(390, 670, "ones");
	double ***A = create_three_dim_double(470, 890, 260, "ones");

	for (int b = 3; b < 36; b++)
	  for (int a = 5; a < 385; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]*0.427;
	    
	     B[a][b]=B[a+3][b+5]+A[a][b][a]/C[a][b][a];
	    
	     C[a][b][a]=0.347;
	     C[a-4][b-3][a-5]=0.727;
	    
	     double var_a=C[a][b][a]/0.68;
	     double var_b=C[a+3][b+4][a+3]+0.863;
	  }

    return 0;
}