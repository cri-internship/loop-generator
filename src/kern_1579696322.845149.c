#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(500, 720, 90, "ones");
	float *A = create_one_dim_float(630, "ones");
	float ***C = create_three_dim_float(680, 860, 660, "ones");

	for (int b = 3; b < 719; b++)
	  for (int a = 4; a < 495; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+1][a+1]/A[a];
	    
	     A[a]=A[a+1]-0.834*C[a][b][a];
	    
	     A[a]=A[a+3]+0.917;
	    
	     C[a][b][a]=C[a][b][a]-A[a]+B[a][b][a];
	     B[a][b][a]=C[a+2][b+4][a]*B[a][b][a]-A[a];
	    
	     A[a]=C[a][b][a]*A[a]/B[a][b][a];
	     C[a][b][a]=C[a-3][b-3][a-4]/B[a][b][a]-A[a];
	  }

    return 0;
}