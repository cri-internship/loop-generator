#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 680, 280, "zeros");
	float *B = create_one_dim_float(240, "zeros");

	for (int b = 0; b < 680; b++)
	  for (int a = 5; a < 185; a++)
	  {
	    
	     B[a]=B[a-5]/A[a][b][a];
	    
	     B[a]=B[a+2]-0.228;
	    
	     B[a]=B[a+1]+0.944;
	    
	     B[a]=A[a][b][a];
	    
	     A[a][b][a]=A[a+5][b][a+4]-0.098;
	    
	     B[a]=A[a][b][a];
	  }

    return 0;
}