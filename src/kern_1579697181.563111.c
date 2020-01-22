#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(350, 760, 190, "random");
	double **C = create_two_dim_double(570, 290, "random");
	double **A = create_two_dim_double(110, 370, "random");

	for (int b = 3; b < 289; b++)
	  for (int a = 5; a < 105; a++)
	  {
	    
	     C[a][b]=C[a-3][b]/0.963;
	    
	     A[a][b]=A[a+5][b+3]-0.692;
	    
	     A[a][b]=A[a+3][b+2]-0.518;
	    
	     C[a][b]=C[a+1][b+1]*0.116;
	    
	     B[a][b][a]=0.951-A[a][b];
	     B[a-5][b-1][a-3]=A[a][b]+C[a][b];
	    
	     B[a][b][a]=0.624;
	  }

    return 0;
}