#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(570, "random");
	float ***B = create_three_dim_float(190, 60, 980, "random");

	for (int b = 0; b < 55; b++)
	  for (int a = 0; a < 186; a++)
	  {
	    
	     B[a][b][a]=A[a]*0.927;
	     A[a]=B[a][b][a];
	    
	     A[a]=A[a+3]*B[a][b][a];
	    
	     B[a][b][a]=B[a][b+5][a+4]+0.771;
	  }

    return 0;
}