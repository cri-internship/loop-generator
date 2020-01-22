#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(700, 250, 210, "zeros");
	double ***B = create_three_dim_double(190, 970, 120, "zeros");

	for (int b = 5; b < 250; b++)
	  for (int a = 5; a < 186; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-2][a]*A[a][b][a];
	    
	     B[a][b][a]=B[a][b-4][a-1]-0.769;
	    
	     B[a][b][a]=B[a-5][b-2][a-3]+A[a][b][a];
	    
	     double var_a=A[a][b][a]-0.941;
	     double var_b=A[a-1][b-5][a-3]/0.169;
	    
	     B[a][b][a]=B[a][b][a]*A[a][b][a];
	     A[a][b][a]=B[a-2][b-5][a-1]-A[a][b][a];
	  }

    return 0;
}