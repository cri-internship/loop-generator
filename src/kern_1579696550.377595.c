#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(510, "ones");
	double ***B = create_three_dim_double(660, 350, 640, "ones");
	double ***A = create_three_dim_double(860, 180, 450, "ones");
	double ***D = create_three_dim_double(880, 930, 960, "ones");

	for (int b = 1; b < 176; b++)
	  for (int a = 2; a < 505; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-1][a-1]+B[a][b][a]*D[a][b][a]/C[a];
	    
	     B[a][b][a]=B[a][b+5][a+2]/0.371;
	    
	     C[a]=0.444;
	     C[a+5]=0.453;
	    
	     D[a][b][a]=A[a][b][a]/C[a]*A[a][b][a];
	     D[a+1][b+3][a+5]=0.317/A[a][b][a]+B[a][b][a];
	    
	     C[a]=A[a][b][a]/0.435;
	    
	     A[a][b][a]=A[a][b][a]*C[a]/B[a][b][a];
	     C[a]=A[a+3][b+4][a]-C[a];
	  }

    return 0;
}