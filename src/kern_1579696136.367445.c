#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(680, 690, "zeros");
	float ***A = create_three_dim_float(680, 180, 100, "zeros");
	float ***B = create_three_dim_float(120, 130, 830, "zeros");

	for (int b = 5; b < 127; b++)
	  for (int a = 4; a < 115; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-1][a-4]-0.295;
	    
	     B[a][b][a]=B[a+5][b+3][a]-0.033;
	    
	     A[a][b][a]=0.95;
	     A[a-4][b-4][a-3]=0.829;
	    
	     C[a][b]=0.51;
	     C[a][b-5]=0.419;
	  }

    return 0;
}