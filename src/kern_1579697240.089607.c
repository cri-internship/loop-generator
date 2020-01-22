#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(100, 210, 420, "random");
	double *A = create_one_dim_double(850, "random");

	for (int b = 0; b < 206; b++)
	  for (int a = 0; a < 96; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+4][a+2]/A[a];
	    
	     A[a]=0.719;
	     A[a]=0.624;
	    
	     B[a][b][a]=B[a][b][a]/0.417;
	     A[a]=B[a+4][b+4][a+2]-A[a];
	  }

    return 0;
}