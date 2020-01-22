#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 190, "ones");
	double ***A = create_three_dim_double(300, 580, 10, "ones");

	for (int d = 4; d < 5; d++)
	  for (int c = 3; c < 186; c++)
	    for (int b = 5; b < 295; b++)
	      for (int a = 5; a < 295; a++)
	      {
	        
	       B[a][b]=A[a][b][c];
	       B[a][b]=B[a][b]/A[a][b][c];
	        
	       A[a][b][c]=A[a-5][b-3][c-4]*0.102;
	        
	       A[a][b][c]=B[a][b];
	        
	       A[a][b][c]=B[a][b]-0.862;
	       A[a][b][c]=B[a-1][b]-A[a][b][c];
	      }

    return 0;
}