#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(520, "zeros");
	int **E = create_two_dim_int(320, 10, "zeros");
	int *C = create_one_dim_int(980, "zeros");
	int **B = create_two_dim_int(380, 270, "zeros");
	int ***D = create_three_dim_int(80, 710, 70, "zeros");

	for (int b = 3; b < 10; b++)
	  for (int a = 4; a < 80; a++)
	  {
	    
	     E[a][b]=E[a-4][b-3]+43;
	    
	     D[a][b][a]=D[a][b-1][a-3]/30;
	    
	     B[a][b]=38;
	     B[a-1][b]=48;
	    
	     B[a][b]=A[a]-D[a][b][a]/E[a][b]*C[a]+B[a][b];
	     A[a]=A[a+2]*C[a];
	    
	     int var_a=E[a][b]*40;
	     int var_b=E[a+3][b]+15;
	    
	     D[a][b][a]=E[a][b]*A[a]+C[a]-A[a];
	     C[a]=E[a-3][b-3]*4;
	  }

    return 0;
}