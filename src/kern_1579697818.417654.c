#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(160, 680, "ones");
	int **A = create_two_dim_int(780, 560, "ones");
	int **B = create_two_dim_int(270, 180, "ones");
	int **C = create_two_dim_int(140, 60, "ones");

	for (int b = 5; b < 557; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     A[a][b]=A[a+3][b+3]*28;
	    
	     int var_a=A[a][b]/11;
	     int var_b=A[a-5][b-1]/19;
	    
	     C[a][b]=A[a][b]-C[a][b];
	     A[a][b]=A[a-1][b-2]+B[a][b]/45*C[a][b];
	    
	     D[a][b]=D[a][b]-A[a][b]+B[a][b];
	     B[a][b]=D[a-1][b-5]-B[a][b]/A[a][b];
	  }

    return 0;
}