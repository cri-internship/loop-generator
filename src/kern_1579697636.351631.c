#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(120, "random");
	double ***C = create_three_dim_double(30, 860, 350, "random");
	double *D = create_one_dim_double(580, "random");
	double ***B = create_three_dim_double(1000, 530, 940, "random");

	for (int c = 0; c < 345; c++)
	  for (int b = 0; b < 856; b++)
	    for (int a = 4; a < 25; a++)
	    {
	      
	      D[a]=D[a-4]/0.366;
	      
	      A[a]=A[a+5]-D[a];
	      
	      C[a][b][c]=C[a+5][b+2][c+2]-0.568;
	      
	      C[a][b][c]=0.859;
	    }

    return 0;
}