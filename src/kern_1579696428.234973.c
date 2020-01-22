#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(720, "ones");
	double ***A = create_three_dim_double(1000, 20, 580, "ones");
	double *B = create_one_dim_double(330, "ones");
	double *D = create_one_dim_double(770, "ones");

	for (int c = 5; c < 720; c++)
	  for (int b = 5; b < 720; b++)
	    for (int a = 5; a < 720; a++)
	    {
	      
	      C[a]=C[a-5]+0.179;
	      
	      C[a]=A[a][b][c]-B[a];
	    }

    return 0;
}