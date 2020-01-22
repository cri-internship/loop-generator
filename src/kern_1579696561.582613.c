#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(310, 150, "ones");
	float **B = create_two_dim_float(840, 60, "ones");
	float **C = create_two_dim_float(690, 930, "ones");
	float *D = create_one_dim_float(280, "ones");
	float ***E = create_three_dim_float(280, 700, 620, "ones");

	for (int d = 2; d < 620; d++)
	  for (int c = 5; c < 56; c++)
	    for (int b = 2; b < 279; b++)
	      for (int a = 2; a < 279; a++)
	      {
	        
	       B[a][b]=B[a-2][b-2]/0.979;
	        
	       B[a][b]=B[a+3][b+4]/E[a][b][c]-A[a][b]*C[a][b];
	        
	       C[a][b]=C[a+5][b]-0.595;
	        
	       D[a]=0.642-C[a][b]*B[a][b];
	       D[a+1]=B[a][b]/C[a][b];
	        
	       E[a][b][c]=D[a]+B[a][b]/D[a]*A[a][b];
	       E[a][b-5][c-2]=A[a][b]/C[a][b]+B[a][b];
	      }

    return 0;
}