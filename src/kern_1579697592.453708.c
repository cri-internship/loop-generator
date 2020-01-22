#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "random");
	double ***B = create_three_dim_double(710, 10, 550, "random");

	for (int b = 3; b < 9; b++)
	  for (int a = 5; a < 585; a++)
	  {
	    
	     B[a][b][a]=B[a][b][a-5]+0.651;
	    
	     B[a][b][a]=B[a-1][b-3][a-3]*A[a];
	    
	     A[a]=A[a+5]+B[a][b][a];
	    
	     B[a][b][a]=B[a+4][b+1][a+5]*A[a];
	    
	     A[a]=A[a]/0.483;
	  }

    return 0;
}