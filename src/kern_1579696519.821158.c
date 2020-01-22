#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(400, 60, 400, "random");
	float **B = create_two_dim_float(80, 590, "random");
	float ***A = create_three_dim_float(370, 310, 960, "random");

	for (int b = 4; b < 310; b++)
	  for (int a = 5; a < 370; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-4][a-5]-C[a][b][a]*B[a][b];
	  }

    return 0;
}