#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(850, 260, "random");
	float *D = create_one_dim_float(550, "random");
	float **A = create_two_dim_float(950, 480, "random");
	float *B = create_one_dim_float(50, "random");

	for (int c = 2; c < 257; c++)
	  for (int b = 5; b < 47; b++)
	    for (int a = 5; a < 47; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]-0.334+B[a];
	      
	      C[a][b]=C[a+2][b+2]/D[a]*A[a][b]-D[a];
	      
	      A[a][b]=C[a][b]+B[a]*D[a];
	      
	      D[a]=C[a][b];
	      D[a+4]=A[a][b];
	      
	      B[a]=D[a]*C[a][b];
	      B[a+3]=C[a][b];
	      
	      A[a][b]=C[a][b]-A[a][b]+D[a]*B[a];
	      B[a]=C[a][b+3]/B[a]+0.093;
	    }

    return 0;
}