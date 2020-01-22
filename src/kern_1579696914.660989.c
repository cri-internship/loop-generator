#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(950, 530, 160, "random");
	double *B = create_one_dim_double(950, "random");

	for (int c = 3; c < 156; c++)
	  for (int b = 0; b < 525; b++)
	    for (int a = 4; a < 948; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b][c-3]+B[a];
	      
	      double var_a=A[a][b][c]-0.465;
	      double var_b=A[a+2][b+5][c+4]+0.551;
	    }

    return 0;
}