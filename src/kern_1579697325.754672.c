#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(590, "random");
	double ***A = create_three_dim_double(890, 100, 200, "random");
	double ***B = create_three_dim_double(730, 200, 710, "random");

	for (int d = 5; d < 200; d++)
	  for (int c = 3; c < 100; c++)
	    for (int b = 1; b < 589; b++)
	      for (int a = 1; a < 589; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-2][c-5]/0.01;
	        
	       A[a][b][c]=A[a][b-3][c-2]/0.92;
	        
	       C[a]=C[a+1]*A[a][b][c]+0.42;
	        
	       B[a][b][c]=B[a+4][b+3][c+4]*0.897;
	        
	       B[a][b][c]=B[a+5][b+4][c+4]*0.318;
	      }

    return 0;
}