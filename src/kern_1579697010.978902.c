#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(40, 980, 840, "zeros");
	float **A = create_two_dim_float(280, 600, "zeros");

	for (int b = 5; b < 599; b++)
	  for (int a = 5; a < 36; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]-0.952;
	    
	     A[a][b]=A[a-2][b-1]/0.032;
	    
	     B[a][b][a]=B[a-3][b-5][a-2]/0.474;
	    
	     B[a][b][a]=B[a+4][b+5][a+1]*A[a][b];
	    
	     A[a][b]=A[a+2][b]/B[a][b][a];
	    
	     float var_a=A[a][b]*0.662;
	     float var_b=A[a+2][b+1]/0.368;
	  }

    return 0;
}