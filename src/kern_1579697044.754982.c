#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(340, 960, "random");
	float ***C = create_three_dim_float(90, 370, 650, "random");
	float **A = create_two_dim_float(940, 280, "random");

	for (int c = 5; c < 275; c++)
	  for (int b = 5; b < 938; b++)
	    for (int a = 5; a < 938; a++)
	    {
	      
	      A[a][b]=A[a-4][b-5]*C[a][b][c];
	      
	      A[a][b]=A[a-5][b-1]-0.529;
	    }

    return 0;
}