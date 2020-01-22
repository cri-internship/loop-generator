#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(680, 670, 1000, "zeros");
	double **C = create_two_dim_double(290, 740, "zeros");
	double **A = create_two_dim_double(220, 230, "zeros");
	double ***B = create_three_dim_double(430, 880, 420, "zeros");

	for (int b = 3; b < 666; b++)
	  for (int a = 5; a < 288; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-3][a-5]*0.826;
	    
	     D[a][b][a]=D[a][b+4][a]/B[a][b][a]-A[a][b]*C[a][b];
	    
	     C[a][b]=C[a+2][b+5]/0.362;
	    
	     B[a][b][a]=0.006;
	  }

    return 0;
}