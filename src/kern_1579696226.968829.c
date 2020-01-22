#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(700, "random");
	double *A = create_one_dim_double(300, "random");
	double **C = create_two_dim_double(350, 140, "random");
	double ***B = create_three_dim_double(390, 370, 740, "random");

	for (int c = 5; c < 140; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      C[a][b]=C[a-5][b-4]/D[a]+A[a]-B[a][b][c];
	      
	      D[a]=D[a+4]/0.121;
	      
	      D[a]=A[a]-C[a][b]+D[a]*C[a][b];
	      A[a]=C[a][b]-B[a][b][c]*D[a];
	      
	      C[a][b]=A[a]*B[a][b][c];
	      
	      B[a][b][c]=C[a][b]/0.889;
	      C[a][b]=C[a-5][b-2]-B[a][b][c]/D[a];
	      
	      A[a]=C[a][b]*B[a][b][c]+D[a];
	      C[a][b]=C[a-2][b-5]-D[a]/B[a][b][c]+A[a];
	    }

    return 0;
}