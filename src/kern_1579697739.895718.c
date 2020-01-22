#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(350, 430, 690, "zeros");
	double ***B = create_three_dim_double(640, 820, 350, "zeros");

	for (int b = 5; b < 815; b++)
	  for (int a = 5; a < 636; a++)
	  {
	    
	     B[a][b][a]=0.801;
	     B[a+4][b+5][a+3]=0.118;
	    
	     B[a][b][a]=0.286;
	    
	     double var_a=B[a][b][a]*0.973;
	     double var_b=B[a+2][b+4][a+2]/0.755;
	    
	     A[a][b][a]=B[a][b][a]-0.272;
	     B[a][b][a]=B[a+3][b+1][a+2]-A[a][b][a];
	    
	     double var_c=B[a][b][a]+0.48;
	     double var_d=B[a-1][b-2][a-2]-0.615;
	    
	     A[a][b][a]=B[a][b][a]-0.11;
	     A[a][b][a]=B[a-1][b-5][a-5]/A[a][b][a];
	  }

    return 0;
}