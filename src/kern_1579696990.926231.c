#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(420, 490, 150, "zeros");
	float ***C = create_three_dim_float(100, 220, 30, "zeros");
	float ***A = create_three_dim_float(570, 570, 560, "zeros");

	for (int b = 5; b < 220; b++)
	  for (int a = 5; a < 95; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-3][a-2]-C[a][b][a]*B[a][b][a];
	    
	     C[a][b][a]=C[a-1][b-3][a]+A[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+1][a+3]/0.008;
	    
	     C[a][b][a]=C[a+1][b][a+5]-0.395;
	    
	     B[a][b][a]=0.186;
	    
	     A[a][b][a]=B[a][b][a]-A[a][b][a];
	     C[a][b][a]=B[a-5][b-5][a]/A[a][b][a]+C[a][b][a];
	    
	     float var_a=A[a][b][a]*0.578;
	     float var_b=A[a+2][b+3][a+1]+0.821;
	  }

    return 0;
}