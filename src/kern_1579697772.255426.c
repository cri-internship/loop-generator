#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(230, "ones");
	double *A = create_one_dim_double(650, "ones");
	double ***B = create_three_dim_double(510, 970, 480, "ones");
	double ***C = create_three_dim_double(550, 790, 200, "ones");

	for (int b = 0; b < 786; b++)
	  for (int a = 2; a < 230; a++)
	  {
	    
	     D[a]=B[a][b][a]*0.216;
	     B[a][b][a]=D[a]+A[a]*C[a][b][a]/B[a][b][a];
	    
	     C[a][b][a]=C[a+4][b+4][a+5]*0.913;
	    
	     A[a]=0.751;
	     A[a-2]=0.74;
	    
	     A[a]=0.955;
	  }

    return 0;
}