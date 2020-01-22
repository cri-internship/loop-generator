#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(890, 680, "zeros");
	float ***D = create_three_dim_float(380, 890, 900, "zeros");
	float **C = create_two_dim_float(220, 240, "zeros");
	float ***B = create_three_dim_float(370, 600, 890, "zeros");

	for (int b = 4; b < 240; b++)
	  for (int a = 5; a < 220; a++)
	  {
	    
	     B[a][b][a]=B[a][b-4][a]*D[a][b][a]-C[a][b];
	    
	     A[a][b]=A[a][b-4]/0.535;
	    
	     D[a][b][a]=D[a-1][b-2][a-2]/A[a][b]+B[a][b][a];
	    
	     A[a][b]=A[a+4][b+5]/0.262-B[a][b][a];
	    
	     D[a][b][a]=0.449;
	    
	     D[a][b][a]=A[a][b]/B[a][b][a]*0.586;
	     C[a][b]=A[a-1][b]*0.339/D[a][b][a]+C[a][b];
	    
	     float var_a=C[a][b]-0.955;
	     float var_b=C[a-5][b-4]+0.618;
	  }

    return 0;
}