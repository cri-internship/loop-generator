#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(340, "zeros");
	float ***E = create_three_dim_float(50, 430, 600, "zeros");
	float **C = create_two_dim_float(30, 390, "zeros");
	float **B = create_two_dim_float(530, 790, "zeros");
	float ***A = create_three_dim_float(410, 250, 850, "zeros");

	for (int d = 0; d < 596; d++)
	  for (int c = 0; c < 249; c++)
	    for (int b = 2; b < 30; b++)
	      for (int a = 2; a < 30; a++)
	      {
	        
	       B[a][b]=B[a-2][b]/0.514;
	        
	       C[a][b]=C[a][b+1]*0.57;
	        
	       D[a]=D[a+2]*A[a][b][c]-C[a][b];
	        
	       E[a][b][c]=E[a+1][b+1][c]/0.181;
	        
	       D[a]=E[a][b][c]-B[a][b]*E[a][b][c]+0.539;
	        
	       E[a][b][c]=D[a];
	        
	       D[a]=A[a][b][c]+B[a][b]-E[a][b][c]/D[a];
	       E[a][b][c]=A[a+2][b+1][c+2]*C[a][b]+D[a]/B[a][b]-E[a][b][c];
	      }

    return 0;
}