#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(670, 280, "zeros");
	double **B = create_two_dim_double(490, 380, "zeros");

	for (int b = 4; b < 280; b++)
	  for (int a = 5; a < 487; a++)
	  {
	    
	     B[a][b]=B[a-5][b-4]+0.179;
	    
	     B[a][b]=B[a+3][b+1]*0.416;
	    
	     B[a][b]=B[a][b+5]-0.088;
	    
	     A[a][b]=B[a][b];
	     A[a][b-3]=0.856;
	    
	     A[a][b]=B[a][b];
	    
	     B[a][b]=B[a][b]+0.02;
	     A[a][b]=B[a+2][b+4]-0.449;
	    
	     double var_a=B[a][b]-0.658;
	     double var_b=B[a+3][b]-0.945;
	  }

    return 0;
}