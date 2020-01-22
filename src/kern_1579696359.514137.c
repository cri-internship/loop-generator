#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(740, "random");
	double *D = create_one_dim_double(500, "random");
	double **A = create_two_dim_double(590, 40, "random");
	double ***B = create_three_dim_double(170, 520, 920, "random");

	for (int d = 0; d < 918; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 2; b < 170; b++)
	      for (int a = 2; a < 170; a++)
	      {
	        
	       D[a]=C[a]-A[a][b]*B[a][b][c];
	       A[a][b]=D[a]*C[a]-A[a][b]+B[a][b][c];
	        
	       A[a][b]=A[a][b-5]+0.284;
	        
	       B[a][b][c]=B[a][b+4][c+2]*D[a];
	        
	       C[a]=D[a]-A[a][b]*B[a][b][c];
	       C[a-1]=B[a][b][c];
	        
	       C[a]=C[a]-D[a]/B[a][b][c];
	       B[a][b][c]=C[a-2]/B[a][b][c];
	      }

    return 0;
}