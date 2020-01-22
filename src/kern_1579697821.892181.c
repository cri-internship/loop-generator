#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(820, 710, "random");
	double ***A = create_three_dim_double(260, 490, 210, "random");

	for (int d = 5; d < 210; d++)
	  for (int c = 5; c < 485; c++)
	    for (int b = 4; b < 260; b++)
	      for (int a = 4; a < 260; a++)
	      {
	        
	       B[a][b]=B[a-4][b-5]/0.852;
	        
	       A[a][b][c]=A[a][b-2][c-5]/0.716;
	        
	       B[a][b]=B[a-1][b-5]+A[a][b][c];
	        
	       B[a][b]=B[a+2][b+2]-A[a][b][c];
	        
	       A[a][b][c]=A[a][b+2][c]*B[a][b];
	        
	       A[a][b][c]=B[a][b]+A[a][b][c];
	       B[a][b]=B[a][b-5]-0.471;
	      }

    return 0;
}