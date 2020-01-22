#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(820, 220, "ones");
	double *B = create_one_dim_double(500, "ones");
	double *A = create_one_dim_double(370, "ones");
	double ***C = create_three_dim_double(540, 100, 450, "ones");
	double ***D = create_three_dim_double(810, 750, 880, "ones");

	for (int d = 4; d < 450; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 4; b < 367; b++)
	      for (int a = 4; a < 367; a++)
	      {
	        
	       D[a][b][c]=D[a][b-5][c-4]/0.281;
	        
	       E[a][b]=E[a-3][b-5]/A[a]+B[a]*D[a][b][c];
	        
	       A[a]=A[a+3]-C[a][b][c]*E[a][b]/E[a][b];
	        
	       E[a][b]=E[a+4][b+2]/0.164;
	        
	       A[a]=0.335;
	        
	       D[a][b][c]=A[a]+C[a][b][c]-B[a];
	        
	       E[a][b]=C[a][b][c]*B[a]/A[a]-D[a][b][c]+E[a][b];
	       D[a][b][c]=C[a-3][b-3][c-2]/0.472;
	      }

    return 0;
}