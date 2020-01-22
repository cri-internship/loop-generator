#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(580, "ones");
	double **C = create_two_dim_double(540, 120, "ones");
	double ***D = create_three_dim_double(190, 490, 360, "ones");
	double **E = create_two_dim_double(360, 80, "ones");
	double **A = create_two_dim_double(270, 830, "ones");

	for (int d = 0; d < 359; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 4; b < 187; b++)
	      for (int a = 4; a < 187; a++)
	      {
	        
	       D[a][b][c]=D[a+3][b+4][c+1]+0.039;
	        
	       B[a]=E[a][b]+C[a][b]*A[a][b]/D[a][b][c];
	       B[a+2]=D[a][b][c]-E[a][b];
	        
	       A[a][b]=0.662;
	       A[a-2][b]=0.568;
	        
	       double var_a=E[a][b]+0.528;
	       double var_b=E[a-3][b-4]+0.634;
	        
	       double var_c=B[a]+0.318;
	       double var_d=B[a-4]*0.483;
	      }

    return 0;
}