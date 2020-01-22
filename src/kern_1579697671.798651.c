#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(260, 420, 970, "ones");
	double *A = create_one_dim_double(390, "ones");

	for (int b = 4; b < 389; b++)
	  for (int a = 4; a < 389; a++)
	  {
	    
	     A[a]=0.54;
	     A[a+1]=B[a][b][a];
	    
	     A[a]=0.353;
	  }

    return 0;
}