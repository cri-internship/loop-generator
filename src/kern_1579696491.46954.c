#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(740, "random");
	double ***C = create_three_dim_double(320, 80, 220, "random");
	double *B = create_one_dim_double(430, "random");
	double **D = create_two_dim_double(410, 270, "random");

	for (int d = 0; d < 220; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       B[a]=B[a-4]-0.197;
	        
	       A[a]=A[a-1]/0.842;
	        
	       D[a][b]=D[a][b-5]+A[a]-C[a][b][c]*0.656;
	        
	       D[a][b]=D[a+5][b+4]*0.056;
	        
	       B[a]=B[a+3]-0.018*D[a][b];
	        
	       A[a]=A[a+4]-0.268;
	        
	       A[a]=C[a][b][c]+A[a];
	       C[a][b][c]=C[a-1][b-3][c]/B[a]+A[a]*D[a][b];
	      }

    return 0;
}