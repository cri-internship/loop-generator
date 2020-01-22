#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(490, 70, "random");
	double ***D = create_three_dim_double(620, 420, 990, "random");
	double **B = create_two_dim_double(60, 720, "random");
	double **C = create_two_dim_double(430, 400, "random");

	for (int d = 4; d < 990; d++)
	  for (int c = 2; c < 395; c++)
	    for (int b = 2; b < 58; b++)
	      for (int a = 2; a < 58; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-2][c-4]/0.975;
	        
	       C[a][b]=C[a][b+5]/D[a][b][c]-B[a][b]+A[a][b];
	        
	       B[a][b]=B[a+2][b]*C[a][b]+C[a][b];
	        
	       D[a][b][c]=0.674;
	      }

    return 0;
}