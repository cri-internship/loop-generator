#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "random");
	float ***B = create_three_dim_float(730, 450, 650, "random");

	for (int b = 5; b < 445; b++)
	  for (int a = 5; a < 597; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-3]/0.425;
	    
	     A[a]=A[a-5]-0.561;
	    
	     B[a][b][a]=B[a-2][b-5][a-3]*A[a];
	    
	     B[a][b][a]=B[a+5][b+5][a+3]*A[a];
	    
	     A[a]=B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]-0.265;
	     A[a]=B[a+5][b+2][a+3]*A[a];
	  }

    return 0;
}