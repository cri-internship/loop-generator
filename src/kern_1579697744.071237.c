#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(890, 190, "zeros");
	float *A = create_one_dim_float(300, "zeros");

	for (int b = 3; b < 185; b++)
	  for (int a = 2; a < 300; a++)
	  {
	    
	     B[a][b]=B[a-2][b-3]-0.09;
	    
	     B[a][b]=B[a+4][b+1]*A[a];
	    
	     B[a][b]=B[a+5][b+5]/0.044;
	    
	     A[a]=A[a]*B[a][b];
	     B[a][b]=A[a-1]-B[a][b];
	  }

    return 0;
}