#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(550, "random");
	double ***B = create_three_dim_double(130, 740, 590, "random");

	for (int b = 3; b < 739; b++)
	  for (int a = 4; a < 126; a++)
	  {
	    
	     A[a]=0.89;
	     A[a-2]=B[a][b][a];
	    
	     B[a][b][a]=A[a];
	     B[a+4][b+1][a+1]=A[a];
	    
	     A[a]=B[a][b][a]/A[a];
	     B[a][b][a]=B[a-1][b-3][a-4]+0.435;
	  }

    return 0;
}