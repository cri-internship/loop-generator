#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(790, 20, 700, "random");
	double ***B = create_three_dim_double(280, 200, 70, "random");
	double *C = create_one_dim_double(510, "random");
	double ***A = create_three_dim_double(800, 850, 550, "random");
	double **D = create_two_dim_double(620, 980, "random");

	for (int c = 3; c < 548; c++)
	  for (int b = 4; b < 848; b++)
	    for (int a = 5; a < 510; a++)
	    {
	      
	      B[a][b][c]=C[a]+D[a][b];
	      C[a]=A[a][b][c]/B[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+2][c+2]-E[a][b][c]*C[a];
	      
	      D[a][b]=D[a+4][b+1]-0.481;
	      
	      A[a][b][c]=C[a]-D[a][b]+B[a][b][c]/E[a][b][c];
	      
	      C[a]=A[a][b][c]/B[a][b][c]*E[a][b][c];
	      
	      D[a][b]=0.003;
	      
	      A[a][b][c]=C[a]/0.342+E[a][b][c];
	      E[a][b][c]=C[a-5]-A[a][b][c];
	    }

    return 0;
}