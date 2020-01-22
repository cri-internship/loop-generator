#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(250, "random");
	float ***B = create_three_dim_float(510, 300, 410, "random");

	for (int b = 2; b < 296; b++)
	  for (int a = 5; a < 248; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-1][a-5]/0.923;
	    
	     B[a][b][a]=B[a+3][b+4][a+5]-A[a];
	    
	     A[a]=0.957;
	     A[a-1]=0.701;
	    
	     A[a]=A[a]+B[a][b][a];
	     B[a][b][a]=A[a+2]+B[a][b][a];
	  }

    return 0;
}