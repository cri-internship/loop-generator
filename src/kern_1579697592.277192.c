#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(260, "zeros");
	float ***C = create_three_dim_float(580, 90, 740, "zeros");
	float *D = create_one_dim_float(550, "zeros");
	float **B = create_two_dim_float(410, 840, "zeros");

	for (int c = 0; c < 835; c++)
	  for (int b = 0; b < 408; b++)
	    for (int a = 0; a < 408; a++)
	    {
	      
	      B[a][b]=B[a+2][b+5]*0.631;
	      
	      B[a][b]=0.228/D[a];
	    }

    return 0;
}