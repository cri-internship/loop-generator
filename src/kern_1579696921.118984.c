#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 600, 840, "ones");
	double *B = create_one_dim_double(340, "ones");
	double ***C = create_three_dim_double(290, 690, 880, "ones");

	for (int b = 5; b < 598; b++)
	  for (int a = 3; a < 265; a++)
	  {
	    
	     double var_a=B[a]/0.684;
	     B[a]=0.598;
	    
	     C[a][b][a]=0.703;
	     C[a][b-5][a-3]=0.409;
	    
	     C[a][b][a]=A[a][b][a]*C[a][b][a]/B[a];
	     A[a][b][a]=A[a+1][b][a+5]-0.886*B[a];
	    
	     B[a]=C[a][b][a]/0.221+A[a][b][a];
	     C[a][b][a]=C[a-3][b-2][a-1]+B[a]*A[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]/C[a][b][a]+B[a];
	     C[a][b][a]=A[a+5][b+2][a+4]+C[a][b][a];
	  }

    return 0;
}