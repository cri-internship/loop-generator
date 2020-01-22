#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(840, 740, "random");
	float ***B = create_three_dim_float(560, 310, 770, "random");
	float **A = create_two_dim_float(180, 800, "random");

	for (int c = 0; c < 740; c++)
	  for (int b = 0; b < 835; b++)
	    for (int a = 0; a < 835; a++)
	    {
	      
	      C[a][b]=C[a+5][b]*B[a][b][c]-A[a][b];
	    }

    return 0;
}