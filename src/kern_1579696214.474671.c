#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 660, 760, "zeros");
	double *B = create_one_dim_double(960, "zeros");

	for (int b = 3; b < 657; b++)
	  for (int a = 5; a < 866; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-1][a-5]*0.479;
	    
	     B[a]=B[a-1]-0.095;
	    
	     B[a]=0.933;
	    
	     A[a][b][a]=A[a+4][b+3][a+1]-B[a];
	    
	     A[a][b][a]=A[a][b][a]+B[a];
	     B[a]=A[a-2][b][a-5]+B[a];
	  }

    return 0;
}