#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(600, 620, "random");
	int **B = create_two_dim_int(930, 920, "random");
	int **C = create_two_dim_int(730, 250, "random");
	int ***D = create_three_dim_int(900, 760, 510, "random");
	int **E = create_two_dim_int(200, 530, "random");

	for (int d = 0; d < 510; d++)
	  for (int c = 0; c < 525; c++)
	    for (int b = 4; b < 196; b++)
	      for (int a = 4; a < 196; a++)
	      {
	        
	       B[a][b]=B[a+2][b+3]-36;
	        
	       C[a][b]=D[a][b][c]/E[a][b]*A[a][b]+B[a][b]-C[a][b];
	       B[a][b]=D[a-4][b][c]-E[a][b]+28*B[a][b];
	        
	       int var_a=E[a][b]*37;
	       int var_b=E[a+4][b+5]*9;
	      }

    return 0;
}