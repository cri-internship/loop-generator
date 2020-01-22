#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(1000, 240, 940, "random");
	double **D = create_two_dim_double(500, 830, "random");
	double **A = create_two_dim_double(500, 680, "random");
	double ***C = create_three_dim_double(950, 330, 590, "random");

	for (int c = 3; c < 935; c++)
	  for (int b = 2; b < 236; b++)
	    for (int a = 5; a < 496; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c-2]-A[a][b]/C[a][b][c];
	      
	      D[a][b]=D[a-1][b]/0.137;
	      
	      B[a][b][c]=B[a+4][b+4][c+5]-0.897;
	      
	      B[a][b][c]=B[a][b+2][c+5]*0.028;
	      
	      double var_a=A[a][b]+0.043;
	      double var_b=A[a+4][b+5]+0.618;
	      
	      A[a][b]=B[a][b][c]-D[a][b]*A[a][b];
	      D[a][b]=B[a-4][b-2][c-3]+A[a][b]/D[a][b];
	    }

    return 0;
}