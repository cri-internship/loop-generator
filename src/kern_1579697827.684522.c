#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(690, 50, 610, "random");
	double **A = create_two_dim_double(770, 710, "random");

	for (int d = 5; d < 605; d++)
	  for (int c = 5; c < 50; c++)
	    for (int b = 4; b < 686; b++)
	      for (int a = 4; a < 686; a++)
	      {
	        
	       A[a][b]=A[a+3][b+3]*0.401;
	        
	       A[a][b]=B[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]*A[a][b];
	       A[a][b]=B[a-1][b-3][c-5]-A[a][b];
	        
	       B[a][b][c]=B[a][b][c]+A[a][b];
	       A[a][b]=B[a+4][b][c+5]-A[a][b];
	      }

    return 0;
}