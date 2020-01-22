#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(620, 510, 750, "zeros");
	float **B = create_two_dim_float(880, 380, "zeros");
	float **D = create_two_dim_float(530, 870, "zeros");
	float ***C = create_three_dim_float(670, 630, 130, "zeros");

	for (int b = 2; b < 510; b++)
	  for (int a = 5; a < 530; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b][a-5]-D[a][b]*0.836/C[a][b][a];
	    
	     D[a][b]=D[a-3][b-2]/A[a][b][a]*0.331+C[a][b][a];
	    
	     C[a][b][a]=C[a][b-1][a-4]/0.216-A[a][b][a]*B[a][b];
	  }

    return 0;
}