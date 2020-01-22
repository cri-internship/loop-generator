#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(30, 200, 280, "ones");
	double *B = create_one_dim_double(30, "ones");
	double **E = create_two_dim_double(350, 10, "ones");
	double ***D = create_three_dim_double(900, 460, 300, "ones");
	double *C = create_one_dim_double(460, "ones");

	for (int d = 4; d < 280; d++)
	  for (int c = 4; c < 10; c++)
	    for (int b = 4; b < 30; b++)
	      for (int a = 4; a < 30; a++)
	      {
	        
	       E[a][b]=E[a-4][b-4]+C[a]/B[a]-A[a][b][c];
	        
	       B[a]=B[a-4]*0.868;
	        
	       A[a][b][c]=D[a][b][c]-0.495;
	       A[a-4][b-2][c-4]=B[a]*E[a][b];
	      }

    return 0;
}