#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 740, "zeros");
	double ***B = create_three_dim_double(430, 330, 400, "zeros");

	for (int c = 2; c < 740; c++)
	  for (int b = 4; b < 937; b++)
	    for (int a = 4; a < 937; a++)
	    {
	      
	      A[a][b]=A[a+3][b]*0.84;
	      
	      double var_a=A[a][b]-0.269;
	      double var_b=A[a-4][b-1]-0.566;
	      
	      A[a][b]=A[a][b]/B[a][b][c];
	      B[a][b][c]=A[a-4][b-2]/B[a][b][c];
	    }

    return 0;
}