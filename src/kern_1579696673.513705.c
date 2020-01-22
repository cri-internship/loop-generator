#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(980, 370, "random");
	double ***D = create_three_dim_double(660, 260, 290, "random");
	double *C = create_one_dim_double(200, "random");
	double ***A = create_three_dim_double(620, 630, 210, "random");
	double ***B = create_three_dim_double(900, 440, 280, "random");

	for (int d = 0; d < 206; d++)
	  for (int c = 2; c < 256; c++)
	    for (int b = 1; b < 195; b++)
	      for (int a = 1; a < 195; a++)
	      {
	        
	       D[a][b][c]=D[a+3][b+4][c+4]/0.454;
	        
	       C[a]=C[a+5]*0.496;
	        
	       E[a][b]=0.669;
	       E[a-1][b-2]=0.963;
	        
	       A[a][b][c]=E[a][b]-B[a][b][c];
	       A[a+2][b+5][c+4]=D[a][b][c]*B[a][b][c];
	        
	       double var_a=D[a][b][c]*0.811;
	       double var_b=D[a+1][b][c+5]+0.401;
	        
	       double var_c=E[a][b]*0.068;
	       double var_d=E[a+2][b+5]*0.107;
	      }

    return 0;
}