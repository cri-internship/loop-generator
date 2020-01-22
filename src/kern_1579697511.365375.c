#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(800, 770, 440, "zeros");
	float ***D = create_three_dim_float(80, 230, 180, "zeros");
	float *A = create_one_dim_float(970, "zeros");
	float **E = create_two_dim_float(870, 480, "zeros");
	float ***B = create_three_dim_float(130, 600, 240, "zeros");

	for (int b = 2; b < 229; b++)
	  for (int a = 2; a < 76; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-2][a-2]+0.198;
	    
	     E[a][b]=E[a][b-2]-C[a][b][a]+0.169;
	    
	     D[a][b][a]=D[a+2][b+1][a+4]*A[a]-E[a][b]+E[a][b]/B[a][b][a];
	    
	     C[a][b][a]=C[a][b+1][a+5]*0.487;
	  }

    return 0;
}