#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(620, 830, 160, "ones");
	double **B = create_two_dim_double(330, 390, "ones");
	double **A = create_two_dim_double(460, 280, "ones");

	for (int b = 4; b < 280; b++)
	  for (int a = 3; a < 330; a++)
	  {
	    
	     A[a][b]=A[a-2][b]*0.308-B[a][b];
	    
	     A[a][b]=A[a-2][b-2]*C[a][b][a];
	    
	     B[a][b]=B[a-3][b-4]-A[a][b];
	  }

    return 0;
}