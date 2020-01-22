#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(270, 660, 950, "random");
	float ***C = create_three_dim_float(30, 780, 10, "random");
	float **A = create_two_dim_float(300, 610, "random");
	float **B = create_two_dim_float(650, 680, "random");

	for (int b = 4; b < 605; b++)
	  for (int a = 4; a < 27; a++)
	  {
	    
	     B[a][b]=B[a-4][b-4]+0.965;
	    
	     D[a][b][a]=D[a][b-3][a-4]*0.278;
	    
	     C[a][b][a]=0.709;
	     C[a+3][b+3][a]=0.309;
	    
	     A[a][b]=0.92+D[a][b][a]/C[a][b][a];
	     A[a+2][b+5]=C[a][b][a]+D[a][b][a];
	    
	     float var_a=B[a][b]-0.317;
	     float var_b=B[a+5][b+1]+0.588;
	    
	     D[a][b][a]=B[a][b]/A[a][b]*A[a][b];
	     C[a][b][a]=B[a+1][b+5]*D[a][b][a]+C[a][b][a]/A[a][b];
	  }

    return 0;
}