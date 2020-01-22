#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(370, 590, "zeros");
	double *D = create_one_dim_double(650, "zeros");
	double ***C = create_three_dim_double(500, 900, 380, "zeros");
	double **B = create_two_dim_double(740, 170, "zeros");

	for (int d = 5; d < 170; d++)
	  for (int c = 5; c < 370; c++)
	    for (int b = 5; b < 370; b++)
	      for (int a = 5; a < 370; a++)
	      {
	        
	       D[a]=D[a-5]*C[a][b][c]+B[a][b]/A[a][b];
	        
	       A[a][b]=A[a-3][b-5]/0.895;
	        
	       D[a]=D[a+2]*C[a][b][c];
	        
	       B[a][b]=0.86;
	       B[a-2][b-4]=0.224;
	        
	       A[a][b]=0.192;
	        
	       A[a][b]=D[a]+B[a][b]-0.854;
	       D[a]=D[a+4]/C[a][b][c]+B[a][b];
	        
	       double var_a=A[a][b]*0.256;
	       double var_b=A[a][b+5]*0.542;
	      }

    return 0;
}