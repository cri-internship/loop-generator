#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(80, 710, 440, "zeros");
	double ***A = create_three_dim_double(100, 350, 640, "zeros");
	double **B = create_two_dim_double(750, 410, "zeros");

	for (int b = 5; b < 350; b++)
	  for (int a = 5; a < 78; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]+A[a][b][a];
	    
	     B[a][b]=B[a-1][b-5]+0.352;
	    
	     A[a][b][a]=A[a-5][b-5][a-5]/0.063;
	    
	     C[a][b][a]=C[a+1][b+2][a+2]+0.85-B[a][b];
	    
	     A[a][b][a]=C[a][b][a]/C[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]-0.39;
	     C[a][b][a]=A[a][b-2][a]-B[a][b]/C[a][b][a];
	  }

    return 0;
}