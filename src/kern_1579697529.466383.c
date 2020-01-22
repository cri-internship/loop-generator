#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(960, 340, 890, "random");
	double **C = create_two_dim_double(530, 230, "random");
	double *A = create_one_dim_double(260, "random");
	double ***B = create_three_dim_double(820, 320, 790, "random");

	for (int d = 0; d < 790; d++)
	  for (int c = 0; c < 227; c++)
	    for (int b = 0; b < 255; b++)
	      for (int a = 0; a < 255; a++)
	      {
	        
	       A[a]=A[a+5]*B[a][b][c]/C[a][b];
	        
	       C[a][b]=C[a+2][b+3]-0.68+D[a][b][c];
	        
	       B[a][b][c]=B[a][b+5][c]-D[a][b][c];
	        
	       D[a][b][c]=D[a+5][b][c]-A[a]/C[a][b]+B[a][b][c];
	        
	       C[a][b]=C[a+2][b+2]*0.859;
	      }

    return 0;
}