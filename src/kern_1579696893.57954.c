#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(820, "random");
	float ***C = create_three_dim_float(670, 870, 170, "random");
	float **A = create_two_dim_float(390, 350, "random");
	float ***D = create_three_dim_float(280, 730, 780, "random");

	for (int b = 1; b < 350; b++)
	  for (int a = 5; a < 387; a++)
	  {
	    
	     A[a][b]=0.908;
	     A[a+3][b]=0.795;
	    
	     A[a][b]=D[a][b][a];
	  }

    return 0;
}