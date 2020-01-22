#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "random");
	int *B = create_one_dim_int(700, "random");
	int **D = create_two_dim_int(930, 790, "random");
	int ***A = create_three_dim_int(190, 860, 410, "random");

	for (int b = 0; b < 787; b++)
	  for (int a = 4; a < 186; a++)
	  {
	    
	     B[a]=B[a-2]/A[a][b][a]-D[a][b]*C[a];
	    
	     C[a]=C[a-2]-30;
	    
	     D[a][b]=D[a+2][b+3]-22;
	    
	     C[a]=40;
	    
	     A[a][b][a]=C[a];
	     A[a-4][b][a]=C[a];
	    
	     A[a][b][a]=C[a]-B[a]/D[a][b]*A[a][b][a];
	     C[a]=C[a-3]/A[a][b][a]*B[a]-D[a][b];
	    
	     int var_a=A[a][b][a]*39;
	     int var_b=A[a+3][b+3][a+4]/8;
	  }

    return 0;
}