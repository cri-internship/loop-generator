#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(390, "ones");
	float **B = create_two_dim_float(990, 280, "ones");
	float ***A = create_three_dim_float(760, 210, 160, "ones");
	float ***D = create_three_dim_float(520, 190, 480, "ones");

	for (int b = 3; b < 187; b++)
	  for (int a = 4; a < 385; a++)
	  {
	    
	     B[a][b]=B[a-4][b-2]/C[a]-D[a][b][a];
	    
	     D[a][b][a]=D[a+2][b+3][a+4]+B[a][b]/A[a][b][a];
	    
	     D[a][b][a]=0.213;
	    
	     A[a][b][a]=C[a]/B[a][b]-D[a][b][a]*A[a][b][a];
	     C[a]=C[a+5]+A[a][b][a]*D[a][b][a];
	    
	     B[a][b]=C[a]/B[a][b];
	     D[a][b][a]=C[a+4]*D[a][b][a]-A[a][b][a];
	  }

    return 0;
}