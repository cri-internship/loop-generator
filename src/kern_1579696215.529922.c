#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(350, "random");
	double ***B = create_three_dim_double(280, 140, 50, "random");
	double **A = create_two_dim_double(660, 890, "random");
	double *C = create_one_dim_double(720, "random");
	double ***E = create_three_dim_double(490, 710, 720, "random");

	for (int d = 5; d < 50; d++)
	  for (int c = 1; c < 140; c++)
	    for (int b = 5; b < 280; b++)
	      for (int a = 5; a < 280; a++)
	      {
	        
	       D[a]=D[a+4]/0.76;
	        
	       D[a]=A[a][b]/B[a][b][c];
	        
	       double var_a=B[a][b][c]+0.262;
	       double var_b=B[a-5][b-1][c-5]+0.78;
	        
	       A[a][b]=C[a]*D[a]/B[a][b][c]-0.693;
	       E[a][b][c]=C[a+5]-A[a][b]+B[a][b][c]*D[a];
	      }

    return 0;
}