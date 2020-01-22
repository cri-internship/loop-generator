#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(320, "ones");
	double **B = create_two_dim_double(840, 870, "ones");
	double *C = create_one_dim_double(570, "ones");
	double *D = create_one_dim_double(230, "ones");
	double ***A = create_three_dim_double(990, 370, 400, "ones");

	for (int d = 1; d < 870; d++)
	  for (int c = 5; c < 226; c++)
	    for (int b = 5; b < 226; b++)
	      for (int a = 5; a < 226; a++)
	      {
	        
	       B[a][b]=B[a][b-1]+C[a]*D[a]/0.713-A[a][b][c];
	        
	       D[a]=B[a][b]-E[a]*C[a];
	       D[a+4]=A[a][b][c]/B[a][b]-E[a]*C[a];
	        
	       E[a]=B[a][b]/E[a];
	       A[a][b][c]=B[a-5][b-1]/0.228;
	      }

    return 0;
}