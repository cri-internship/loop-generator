#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(780, "ones");
	int *C = create_one_dim_int(230, "ones");
	int **B = create_two_dim_int(390, 290, "ones");
	int *D = create_one_dim_int(760, "ones");

	for (int b = 1; b < 286; b++)
	  for (int a = 5; a < 225; a++)
	  {
	    
	     D[a]=D[a-5]*A[a]+B[a][b];
	    
	     B[a][b]=B[a][b-1]+18;
	    
	     C[a]=C[a+5]-D[a]*B[a][b]/A[a];
	    
	     B[a][b]=B[a+5][b+4]/28;
	    
	     A[a]=D[a]-C[a];
	     A[a-3]=D[a]/C[a]-B[a][b];
	    
	     A[a]=6;
	    
	     C[a]=B[a][b]-A[a]*D[a];
	  }

    return 0;
}