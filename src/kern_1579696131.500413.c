#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(100, "random");
	double *A = create_one_dim_double(830, "random");
	double ***D = create_three_dim_double(570, 720, 700, "random");
	double *C = create_one_dim_double(930, "random");

	for (int c = 4; c < 700; c++)
	  for (int b = 0; b < 720; b++)
	    for (int a = 3; a < 95; a++)
	    {
	      
	      A[a]=A[a+5]-0.29;
	      
	      B[a]=A[a]-0.776;
	      B[a+5]=D[a][b][c]/C[a]+A[a];
	      
	      D[a][b][c]=B[a]+C[a]-A[a];
	      D[a-3][b][c-4]=B[a];
	      
	      A[a]=0.251;
	    }

    return 0;
}