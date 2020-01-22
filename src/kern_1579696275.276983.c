#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(520, 740, 210, "ones");
	double ***A = create_three_dim_double(690, 690, 690, "ones");

	for (int b = 5; b < 685; b++)
	  for (int a = 3; a < 515; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+5][a+1]/0.839;
	    
	     B[a][b][a]=B[a+5][b+2][a+4]*0.36;
	    
	     B[a][b][a]=B[a+5][b][a+4]/A[a][b][a];
	    
	     A[a][b][a]=A[a+1][b+5][a+4]/0.707;
	    
	     double var_a=B[a][b][a]*0.648;
	     double var_b=B[a-3][b-5][a]/0.723;
	  }

    return 0;
}