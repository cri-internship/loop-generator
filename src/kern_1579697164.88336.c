#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(210, 490, "random");
	int *A = create_one_dim_int(340, "random");
	int **D = create_two_dim_int(910, 940, "random");
	int *B = create_one_dim_int(280, "random");

	for (int c = 5; c < 487; c++)
	  for (int b = 5; b < 207; b++)
	    for (int a = 5; a < 207; a++)
	    {
	      
	      C[a][b]=28;
	      C[a+3][b+3]=7;
	      
	      B[a]=33;
	      B[a+3]=34;
	      
	      D[a][b]=34;
	      D[a+5][b+3]=42;
	      
	      int var_a=C[a][b]*48;
	      int var_b=C[a-4][b-5]/5;
	      
	      A[a]=D[a][b]-11;
	      D[a][b]=D[a+5][b+5]-C[a][b]*A[a];
	      
	      B[a]=A[a]/D[a][b]*B[a]+D[a][b];
	      C[a][b]=A[a-5]*C[a][b]+B[a];
	    }

    return 0;
}