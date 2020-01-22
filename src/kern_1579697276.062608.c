#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(550, 990, 740, "random");
	double ***B = create_three_dim_double(980, 850, 340, "random");
	double **C = create_two_dim_double(300, 520, "random");
	double **D = create_two_dim_double(530, 300, "random");

	for (int d = 4; d < 740; d++)
	  for (int c = 3; c < 300; c++)
	    for (int b = 5; b < 300; b++)
	      for (int a = 5; a < 300; a++)
	      {
	        
	       A[a][b][c]=B[a][b][c]*D[a][b]-C[a][b];
	       A[a-5][b-3][c-4]=C[a][b]/B[a][b][c]*0.157;
	        
	       B[a][b][c]=A[a][b][c]*0.543+D[a][b];
	       C[a][b]=A[a-4][b-1][c-2]+C[a][b]*D[a][b];
	        
	       double var_a=D[a][b]+0.174;
	       double var_b=D[a+4][b]/0.783;
	        
	       double var_c=C[a][b]+0.987;
	       double var_d=C[a-1][b-3]+0.427;
	      }

    return 0;
}