#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(180, 690, 940, "ones");
	double **B = create_two_dim_double(750, 150, "ones");

	for (int b = 5; b < 146; b++)
	  for (int a = 4; a < 176; a++)
	  {
	    
	     B[a][b]=B[a-3][b-5]*0.902;
	    
	     A[a][b][a]=A[a-4][b-4][a-4]+0.606;
	    
	     B[a][b]=B[a+3][b+4]/0.059;
	    
	     A[a][b][a]=A[a+4][b][a+3]-0.291;
	    
	     double var_a=B[a][b]-0.697;
	     double var_b=B[a-2][b]*0.521;
	  }

    return 0;
}