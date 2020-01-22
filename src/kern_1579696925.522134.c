#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(480, 700, 280, "ones");
	double **B = create_two_dim_double(600, 540, "ones");

	for (int b = 4; b < 537; b++)
	  for (int a = 5; a < 597; a++)
	  {
	    
	     B[a][b]=B[a-5][b-1]*0.339;
	    
	     B[a][b]=B[a+3][b]+0.091;
	    
	     B[a][b]=B[a+1][b+3]+0.701;
	    
	     double var_a=B[a][b]+0.123;
	     double var_b=B[a-5][b-4]*0.671;
	  }

    return 0;
}