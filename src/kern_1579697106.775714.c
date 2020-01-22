#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(690, 660, 670, "zeros");
	int *D = create_one_dim_int(390, "zeros");
	int *B = create_one_dim_int(680, "zeros");
	int *A = create_one_dim_int(730, "zeros");

	for (int b = 0; b < 388; b++)
	  for (int a = 0; a < 388; a++)
	  {
	    
	     D[a]=D[a+2]+35;
	    
	     A[a]=A[a+2]/49;
	    
	     D[a]=17;
	    
	     B[a]=D[a]-A[a]*C[a][b][a];
	     B[a+3]=A[a]-D[a];
	    
	     B[a]=B[a]-C[a][b][a]/D[a]+A[a];
	     C[a][b][a]=B[a]-D[a];
	  }

    return 0;
}