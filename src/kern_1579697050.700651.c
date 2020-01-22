#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "random");
	double ***D = create_three_dim_double(730, 830, 520, "random");
	double **C = create_two_dim_double(60, 650, "random");
	double ***E = create_three_dim_double(900, 990, 880, "random");
	double *B = create_one_dim_double(610, "random");

	for (int c = 1; c < 178; c++)
	  for (int b = 1; b < 178; b++)
	    for (int a = 1; a < 178; a++)
	    {
	      
	      A[a]=0.271;
	      float  var_a=A[a]-0.481;
	      
	      B[a]=B[a-1]/0.549;
	      
	      B[a]=B[a+4]*0.703;
	      
	      A[a]=A[a+2]/E[a][b][c]*C[a][b]-B[a];
	      
	      B[a]=B[a]*C[a][b]-A[a]/D[a][b][c];
	      D[a][b][c]=B[a+1]-A[a]*D[a][b][c]/E[a][b][c]+0.217;
	    }

    return 0;
}