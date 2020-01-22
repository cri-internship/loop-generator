#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(200, 230, 950, "zeros");
	double *C = create_one_dim_double(360, "zeros");
	double ***B = create_three_dim_double(350, 50, 140, "zeros");

	for (int b = 5; b < 50; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-4]/B[a][b][a];
	    
	     B[a][b][a]=B[a-1][b-2][a]+0.964;
	    
	     C[a]=0.105;
	     C[a+2]=B[a][b][a]-A[a][b][a];
	    
	     A[a][b][a]=C[a]*B[a][b][a]/A[a][b][a];
	     C[a]=C[a+2]-B[a][b][a]/A[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]+C[a]*A[a][b][a];
	     A[a][b][a]=B[a-1][b-5][a-5]*A[a][b][a]-C[a];
	  }

    return 0;
}