#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(220, 800, "zeros");
	float *B = create_one_dim_float(610, "zeros");
	float **A = create_two_dim_float(340, 660, "zeros");

	for (int b = 3; b < 655; b++)
	  for (int a = 5; a < 220; a++)
	  {
	    
	     A[a][b]=A[a-2][b-3]*B[a];
	    
	     C[a][b]=C[a-1][b-3]*A[a][b];
	    
	     B[a]=0.044;
	     B[a+2]=A[a][b];
	    
	     A[a][b]=0.631;
	    
	     C[a][b]=0.249;
	    
	     float var_a=C[a][b]*0.19;
	     float var_b=C[a-5][b-1]/0.285;
	  }

    return 0;
}