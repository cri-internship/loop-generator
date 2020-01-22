#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(850, 320, 300, "random");
	float *B = create_one_dim_float(260, "random");
	float **C = create_two_dim_float(10, 990, "random");
	float ***D = create_three_dim_float(540, 780, 890, "random");
	float **E = create_two_dim_float(910, 180, "random");

	for (int b = 4; b < 177; b++)
	  for (int a = 4; a < 540; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-4][a-3]*0.228;
	    
	     E[a][b]=0.215;
	     E[a+1][b+3]=0.279;
	    
	     D[a][b][a]=0.682;
	     D[a-4][b-3][a-3]=0.901;
	    
	     A[a][b][a]=A[a][b][a]-E[a][b]+0.249*C[a][b];
	     B[a]=A[a-4][b-4][a-2]-B[a]/B[a]+C[a][b]*E[a][b];
	  }

    return 0;
}