#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(650, 580, "random");
	double **C = create_two_dim_double(260, 320, "random");
	double **A = create_two_dim_double(740, 260, "random");

	for (int c = 5; c < 316; c++)
	  for (int b = 5; b < 257; b++)
	    for (int a = 5; a < 257; a++)
	    {
	      
	      B[a][b]=B[a-5][b]-0.269;
	      
	      C[a][b]=0.131;
	      C[a+3][b+4]=0.787;
	      
	      A[a][b]=B[a][b]-0.467;
	      C[a][b]=B[a-3][b-5]+C[a][b];
	    }

    return 0;
}