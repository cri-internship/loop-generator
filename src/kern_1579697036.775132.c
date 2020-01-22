#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(70, 530, 390, "zeros");
	float *B = create_one_dim_float(490, "zeros");

	for (int b = 0; b < 530; b++)
	  for (int a = 0; a < 67; a++)
	  {
	    
	     B[a]=B[a+5]+A[a][b][a];
	    
	     B[a]=B[a+2]+0.822;
	    
	     B[a]=B[a+4]*0.297;
	    
	     A[a][b][a]=A[a+1][b][a+3]-0.672;
	  }

    return 0;
}