#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(140, 320, 300, "zeros");
	double ***B = create_three_dim_double(890, 990, 780, "zeros");
	double **A = create_two_dim_double(410, 440, "zeros");

	for (int b = 5; b < 320; b++)
	  for (int a = 3; a < 136; a++)
	  {
	    
	     A[a][b]=A[a-3][b-5]*C[a][b][a]+B[a][b][a];
	    
	     A[a][b]=C[a][b][a]-B[a][b][a];
	    
	     A[a][b]=C[a][b][a]*A[a][b]-B[a][b][a];
	     B[a][b][a]=C[a+3][b][a+4]+A[a][b]-0.056;
	  }

    return 0;
}