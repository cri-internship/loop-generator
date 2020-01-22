#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(640, "zeros");
	double ***A = create_three_dim_double(850, 850, 660, "zeros");

	for (int b = 0; b < 847; b++)
	  for (int a = 0; a < 636; a++)
	  {
	    
	     A[a][b][a]=0.938;
	     A[a+1][b+3][a+3]=B[a];
	    
	     A[a][b][a]=B[a]-A[a][b][a];
	     B[a]=B[a+4]*A[a][b][a];
	  }

    return 0;
}