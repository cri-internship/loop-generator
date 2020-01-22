#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(110, 780, 990, "zeros");
	float ***D = create_three_dim_float(890, 730, 200, "zeros");
	float ***A = create_three_dim_float(440, 630, 670, "zeros");
	float **B = create_two_dim_float(60, 850, "zeros");

	for (int b = 3; b < 630; b++)
	  for (int a = 4; a < 57; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-3][a-1]-0.826;
	    
	     D[a][b][a]=D[a+3][b+3][a+1]-0.272;
	    
	     D[a][b][a]=D[a+2][b+2][a+5]+B[a][b]/C[a][b][a];
	    
	     B[a][b]=A[a][b][a]-D[a][b][a]*0.34;
	     B[a+3][b+1]=0.321+D[a][b][a];
	    
	     float var_a=A[a][b][a]+0.705;
	     float var_b=A[a][b][a-4]*0.966;
	  }

    return 0;
}