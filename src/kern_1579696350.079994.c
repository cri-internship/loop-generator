#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(570, "zeros");
	float *A = create_one_dim_float(220, "zeros");
	float ***B = create_three_dim_float(280, 540, 1000, "zeros");
	float ***D = create_three_dim_float(630, 460, 50, "zeros");

	for (int b = 1; b < 456; b++)
	  for (int a = 5; a < 217; a++)
	  {
	    
	     A[a]=A[a-2]/0.24;
	    
	     B[a][b][a]=B[a-4][b-1][a-1]+D[a][b][a];
	    
	     C[a]=0.395;
	     float  var_a=C[a]*0.423;
	    
	     A[a]=A[a+3]*0.578;
	    
	     B[a][b][a]=B[a+2][b+2][a+4]-A[a];
	    
	     D[a][b][a]=B[a][b][a]/C[a];
	     D[a+1][b+4][a+4]=0.661;
	  }

    return 0;
}