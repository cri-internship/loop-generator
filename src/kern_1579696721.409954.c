#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(930, 70, 40, "random");
	double *B = create_one_dim_double(430, "random");
	double ***A = create_three_dim_double(840, 370, 790, "random");

	for (int c = 3; c < 35; c++)
	  for (int b = 2; b < 66; b++)
	    for (int a = 5; a < 425; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b][c-1]/B[a]*C[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-2][c-3]*C[a][b][c];
	      
	      C[a][b][c]=C[a+5][b][c+5]-A[a][b][c]/B[a];
	      
	      B[a]=B[a+5]*0.944;
	      
	      double var_a=C[a][b][c]*0.631;
	      double var_b=C[a+4][b+4][c+5]*0.012;
	    }

    return 0;
}