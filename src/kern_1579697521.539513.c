#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "random");
	float **B = create_two_dim_float(720, 330, "random");
	float **C = create_two_dim_float(130, 530, "random");

	for (int c = 0; c < 527; c++)
	  for (int b = 0; b < 125; b++)
	    for (int a = 0; a < 125; a++)
	    {
	      
	      A[a]=A[a+3]-0.454;
	      
	      C[a][b]=C[a+5][b+1]/0.463;
	      
	      C[a][b]=B[a][b];
	    }

    return 0;
}