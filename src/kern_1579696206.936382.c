#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(140, "random");
	double ***B = create_three_dim_double(120, 790, 880, "random");

	for (int c = 5; c < 880; c++)
	  for (int b = 5; b < 785; b++)
	    for (int a = 5; a < 115; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-5][c-4]/0.238;
	      
	      double var_a=A[a]+0.451;
	      A[a]=0.579;
	      
	      A[a]=0.493;
	      
	      B[a][b][c]=A[a]*B[a][b][c];
	      A[a]=A[a+3]+B[a][b][c];
	      
	      A[a]=B[a][b][c]/0.477;
	      A[a]=B[a+4][b+1][c]-A[a];
	      
	      double var_b=B[a][b][c]-0.322;
	      double var_c=B[a+5][b+5][c]/0.482;
	      
	      B[a][b][c]=B[a][b][c]+A[a];
	      B[a][b][c]=B[a-5][b-4][c-5]-A[a];
	    }

    return 0;
}