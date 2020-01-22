#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(580, 990, 980, "random");
	double **B = create_two_dim_double(240, 770, "random");
	double ***C = create_three_dim_double(180, 550, 850, "random");

	for (int d = 0; d < 850; d++)
	  for (int c = 2; c < 546; c++)
	    for (int b = 4; b < 176; b++)
	      for (int a = 4; a < 176; a++)
	      {
	        
	       B[a][b]=0.02;
	       B[a+5][b+3]=0.087;
	        
	       C[a][b][c]=B[a][b];
	       C[a+4][b+4][c]=A[a][b][c]-A[a][b][c];
	        
	       B[a][b]=C[a][b][c]/0.246;
	        
	       C[a][b][c]=B[a][b]+A[a][b][c];
	       A[a][b][c]=B[a+3][b+4]-C[a][b][c];
	      }

    return 0;
}