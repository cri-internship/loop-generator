#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(690, 890, "random");
	float **A = create_two_dim_float(860, 380, "random");
	float **C = create_two_dim_float(900, 430, "random");
	float **D = create_two_dim_float(850, 610, "random");

	for (int c = 1; c < 428; c++)
	  for (int b = 4; b < 690; b++)
	    for (int a = 4; a < 690; a++)
	    {
	      
	      B[a][b]=0.511;
	      B[a-4][b-1]=0.047;
	      
	      float var_a=C[a][b]-0.544;
	      float var_b=C[a+5][b+2]+0.789;
	    }

    return 0;
}