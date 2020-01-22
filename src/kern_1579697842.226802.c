#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(900, 880, 540, "ones");
	float *A = create_one_dim_float(740, "ones");

	for (int c = 5; c < 536; c++)
	  for (int b = 1; b < 878; b++)
	    for (int a = 1; a < 737; a++)
	    {
	      
	      A[a]=A[a+3]-0.385;
	      
	      A[a]=A[a+1]*0.498;
	      
	      B[a][b][c]=A[a]+B[a][b][c];
	      A[a]=A[a-1]-B[a][b][c];
	      
	      B[a][b][c]=B[a][b][c]+A[a];
	      A[a]=B[a][b+2][c+4]*0.726;
	      
	      A[a]=B[a][b][c]/A[a];
	      A[a]=B[a][b-1][c-5]/A[a];
	      
	      A[a]=A[a]-B[a][b][c];
	      B[a][b][c]=A[a+2]+B[a][b][c];
	      
	      A[a]=A[a]/B[a][b][c];
	    }

    return 0;
}