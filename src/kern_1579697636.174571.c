#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(150, 780, "random");
	float ***C = create_three_dim_float(920, 210, 380, "random");
	float ***B = create_three_dim_float(610, 190, 160, "random");

	for (int c = 5; c < 777; c++)
	  for (int b = 1; b < 150; b++)
	    for (int a = 1; a < 150; a++)
	    {
	      
	      A[a][b]=A[a][b+3]+0.828;
	      
	      A[a][b]=C[a][b][c]-0.075;
	    }

    return 0;
}