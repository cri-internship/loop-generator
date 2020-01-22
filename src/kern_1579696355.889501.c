#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 820, 70, "random");
	double ***B = create_three_dim_double(190, 600, 480, "random");
	double *C = create_one_dim_double(120, "random");

	for (int d = 4; d < 66; d++)
	  for (int c = 3; c < 600; c++)
	    for (int b = 3; b < 115; b++)
	      for (int a = 3; a < 115; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-1]*0.361;
	        
	       C[a]=C[a+2]/0.833;
	        
	       C[a]=C[a+3]-B[a][b][c]+A[a][b][c];
	        
	       A[a][b][c]=C[a]*C[a];
	       A[a+3][b][c+4]=B[a][b][c]/C[a];
	        
	       B[a][b][c]=0.881;
	        
	       C[a]=C[a]-A[a][b][c];
	       A[a][b][c]=C[a+5]-A[a][b][c];
	      }

    return 0;
}