#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(700, 120, 450, "random");
	double **C = create_two_dim_double(850, 180, "random");
	double *D = create_one_dim_double(280, "random");
	double *B = create_one_dim_double(350, "random");
	double **A = create_two_dim_double(420, 490, "random");

	for (int d = 1; d < 179; d++)
	  for (int c = 2; c < 280; c++)
	    for (int b = 2; b < 280; b++)
	      for (int a = 2; a < 280; a++)
	      {
	        
	       B[a]=B[a-1]+0.516;
	        
	       C[a][b]=C[a-2][b-1]-A[a][b]+E[a][b][c]/D[a];
	        
	       B[a]=C[a][b]*A[a][b]+D[a]-E[a][b][c];
	        
	       D[a]=0.394;
	       D[a]=0.305;
	        
	       double var_a=C[a][b]/0.23;
	       double var_b=C[a+2][b+1]*0.14;
	      }

    return 0;
}