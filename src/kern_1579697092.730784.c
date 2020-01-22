#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(230, 590, "random");
	double **B = create_two_dim_double(830, 820, "random");
	double ***C = create_three_dim_double(1000, 950, 750, "random");

	for (int b = 0; b < 589; b++)
	  for (int a = 5; a < 228; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b][a-1]+B[a][b];
	    
	     C[a][b][a]=C[a+2][b+1][a]+0.821;
	    
	     A[a][b]=A[a+2][b+1]*0.144;
	    
	     B[a][b]=A[a][b];
	     B[a-5][b]=0.959-C[a][b][a];
	    
	     C[a][b][a]=C[a][b][a]-0.845;
	     A[a][b]=C[a][b][a+2]+B[a][b]*A[a][b];
	  }

    return 0;
}