#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(400, 320, "zeros");
	float ***A = create_three_dim_float(820, 250, 490, "zeros");
	float *C = create_one_dim_float(840, "zeros");
	float *B = create_one_dim_float(200, "zeros");

	for (int b = 3; b < 248; b++)
	  for (int a = 5; a < 197; a++)
	  {
	    
	     D[a][b]=D[a-1][b-3]+0.227;
	    
	     A[a][b][a]=A[a-5][b][a-2]-B[a];
	    
	     A[a][b][a]=A[a+3][b+2][a+5]+C[a]-0.822;
	    
	     B[a]=B[a+1]-A[a][b][a]/A[a][b][a]*C[a];
	    
	     D[a][b]=D[a+4][b+1]-0.281+C[a];
	    
	     C[a]=B[a]+D[a][b]*0.095;
	     A[a][b][a]=B[a+3]*A[a][b][a]-C[a];
	  }

    return 0;
}