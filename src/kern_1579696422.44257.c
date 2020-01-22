#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(1000, 650, 370, "random");
	float *A = create_one_dim_float(680, "random");
	float *E = create_one_dim_float(630, "random");
	float *D = create_one_dim_float(490, "random");
	float **B = create_two_dim_float(120, 580, "random");

	for (int c = 0; c < 579; c++)
	  for (int b = 0; b < 117; b++)
	    for (int a = 0; a < 117; a++)
	    {
	      
	      E[a]=C[a][b][c]/B[a][b]*A[a];
	      E[a]=E[a]-D[a]*C[a][b][c]/A[a]+B[a][b];
	      
	      B[a][b]=E[a]-C[a][b][c]+E[a]/D[a];
	      B[a+3][b+1]=C[a][b][c]-D[a]/A[a];
	      
	      D[a]=D[a]*B[a][b];
	      B[a][b]=D[a+2]*B[a][b];
	    }

    return 0;
}