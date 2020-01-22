#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(420, "random");
	double ***B = create_three_dim_double(470, 320, 990, "random");
	double *E = create_one_dim_double(600, "random");
	double ***A = create_three_dim_double(330, 780, 690, "random");
	double *D = create_one_dim_double(730, "random");

	for (int d = 4; d < 689; d++)
	  for (int c = 5; c < 320; c++)
	    for (int b = 2; b < 328; b++)
	      for (int a = 2; a < 328; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-4]/D[a]*E[a]+A[a][b][c]-C[a];
	        
	       D[a]=D[a-2]*0.757;
	        
	       E[a]=E[a+1]+0.935-B[a][b][c]*C[a]/A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+1][c+1]*D[a];
	        
	       C[a]=D[a]/B[a][b][c]*A[a][b][c]+C[a];
	       B[a][b][c]=D[a+5]/B[a][b][c]+C[a]*A[a][b][c]-E[a];
	        
	       double var_a=C[a]-0.69;
	       double var_b=C[a-1]/0.082;
	        
	       D[a]=D[a]*C[a]+E[a];
	       E[a]=D[a+3]+B[a][b][c]/C[a]*A[a][b][c]-E[a];
	      }

    return 0;
}