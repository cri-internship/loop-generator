#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(10, 540, 860, "ones");
	double ***A = create_three_dim_double(560, 960, 690, "ones");

	for (int b = 1; b < 536; b++)
	  for (int a = 3; a < 6; a++)
	  {
	    
	     B[a][b][a]=B[a][b-1][a-3]+A[a][b][a];
	    
	     B[a][b][a]=B[a+1][b][a+4]+0.189;
	    
	     B[a][b][a]=B[a+4][b+1][a+3]/A[a][b][a];
	    
	     B[a][b][a]=A[a][b][a]-0.31;
	     A[a][b][a]=A[a+2][b+1][a+1]/B[a][b][a];
	    
	     double var_a=B[a][b][a]*0.876;
	     double var_b=B[a+3][b+4][a+1]-0.821;
	    
	     double var_c=A[a][b][a]/0.329;
	     double var_d=A[a][b-1][a-2]*0.684;
	  }

    return 0;
}