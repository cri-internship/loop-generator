#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(110, 1000, "zeros");
	double **A = create_two_dim_double(620, 370, "zeros");

	for (int c = 3; c < 367; c++)
	  for (int b = 2; b < 109; b++)
	    for (int a = 2; a < 109; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]*0.373;
	      
	      A[a][b]=A[a-2][b-3]-0.974;
	      
	      B[a][b]=B[a+1][b+2]+0.936;
	      
	      A[a][b]=0.057;
	    }

    return 0;
}