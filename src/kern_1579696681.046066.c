#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(880, 620, 760, "random");
	double *A = create_one_dim_double(420, "random");

	for (int c = 5; c < 756; c++)
	  for (int b = 3; b < 619; b++)
	    for (int a = 5; a < 420; a++)
	    {
	      
	      A[a]=A[a-1]-B[a][b][c];
	      
	      double var_a=B[a][b][c]/0.133;
	      double var_b=B[a+2][b+1][c+4]-0.751;
	      
	      double var_c=B[a][b][c]+0.698;
	      double var_d=B[a-5][b-3][c-5]/0.071;
	    }

    return 0;
}