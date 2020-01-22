#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(800, 650, 760, "zeros");
	float **B = create_two_dim_float(650, 870, "zeros");
	float **C = create_two_dim_float(620, 900, "zeros");

	for (int c = 0; c < 758; c++)
	  for (int b = 3; b < 645; b++)
	    for (int a = 3; a < 616; a++)
	    {
	      
	      C[a][b]=C[a-1][b]-A[a][b][c];
	      
	      B[a][b]=B[a-2][b-3]/C[a][b];
	      
	      B[a][b]=B[a-3][b]/A[a][b][c]-C[a][b];
	      
	      B[a][b]=B[a+4][b+4]/0.907;
	      
	      C[a][b]=C[a+4][b+5]*0.224;
	      
	      A[a][b][c]=A[a+5][b+5][c+2]-0.575;
	    }

    return 0;
}