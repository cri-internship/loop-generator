#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(470, 720, 820, "random");
	double **A = create_two_dim_double(510, 760, "random");

	for (int b = 0; b < 757; b++)
	  for (int a = 0; a < 507; a++)
	  {
	    
	     A[a][b]=A[a+1][b+3]-0.761;
	    
	     A[a][b]=B[a][b][a];
	  }

    return 0;
}