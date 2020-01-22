#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 130, "random");
	double **C = create_two_dim_double(460, 310, "random");
	double ***A = create_three_dim_double(200, 370, 690, "random");
	double *D = create_one_dim_double(830, "random");

	for (int c = 2; c < 130; c++)
	  for (int b = 3; b < 240; b++)
	    for (int a = 3; a < 240; a++)
	    {
	      
	      C[a][b]=0.026;
	      C[a+4][b]=A[a][b][c]-D[a]/D[a];
	      
	      B[a][b]=0.256;
	      B[a-3][b-2]=0.266;
	    }

    return 0;
}