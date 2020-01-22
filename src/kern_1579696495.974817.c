#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(600, 100, 330, "ones");
	double **C = create_two_dim_double(50, 370, "ones");
	double *B = create_one_dim_double(470, "ones");
	double *D = create_one_dim_double(70, "ones");

	for (int b = 5; b < 97; b++)
	  for (int a = 5; a < 70; a++)
	  {
	    
	     D[a]=D[a-5]-A[a][b][a]*B[a]/C[a][b];
	    
	     B[a]=B[a-2]-0.355;
	    
	     A[a][b][a]=A[a][b+3][a]*0.496;
	    
	     A[a][b][a]=D[a]-D[a];
	  }

    return 0;
}