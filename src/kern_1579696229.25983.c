#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(470, "zeros");
	float **B = create_two_dim_float(830, 330, "zeros");

	for (int b = 0; b < 326; b++)
	  for (int a = 3; a < 470; a++)
	  {
	    
	     A[a]=A[a-1]/B[a][b];
	    
	     B[a][b]=B[a-3][b]*0.872;
	    
	     B[a][b]=B[a+1][b+1]-0.654;
	    
	     B[a][b]=B[a][b]+A[a];
	     A[a]=B[a+1][b+4]-0.725;
	  }

    return 0;
}