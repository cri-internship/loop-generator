#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(850, 710, 270, "ones");
	double **C = create_two_dim_double(380, 40, "ones");
	double ***B = create_three_dim_double(440, 40, 70, "ones");

	for (int d = 5; d < 67; d++)
	  for (int c = 3; c < 35; c++)
	    for (int b = 3; b < 377; b++)
	      for (int a = 3; a < 377; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-2][c-5]+0.484;
	        
	       B[a][b][c]=B[a-2][b-1][c-2]-0.759;
	        
	       double var_a=A[a][b][c]/0.333;
	       double var_b=A[a-1][b-3][c-4]-0.99;
	        
	       double var_c=C[a][b]-0.384;
	       double var_d=C[a+3][b]*0.707;
	        
	       C[a][b]=B[a][b][c]-A[a][b][c];
	       A[a][b][c]=B[a+4][b+5][c+3]+C[a][b];
	      }

    return 0;
}