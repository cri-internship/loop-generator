#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(590, "zeros");
	int **A = create_two_dim_int(980, 170, "zeros");
	int ***E = create_three_dim_int(290, 90, 430, "zeros");
	int ***D = create_three_dim_int(640, 550, 580, "zeros");
	int **B = create_two_dim_int(240, 260, "zeros");

	for (int b = 4; b < 167; b++)
	  for (int a = 4; a < 240; a++)
	  {
	    
	     C[a]=C[a-4]*B[a][b]/A[a][b]-E[a][b][a]+D[a][b][a];
	    
	     A[a][b]=C[a];
	     A[a][b-4]=D[a][b][a];
	    
	     C[a]=A[a][b]-C[a]+B[a][b];
	     B[a][b]=A[a+1][b+3]+24-C[a]/D[a][b][a];
	    
	     A[a][b]=B[a][b]/D[a][b][a]+A[a][b];
	     D[a][b][a]=B[a-2][b-2]+C[a]/D[a][b][a];
	    
	     int var_a=C[a]+46;
	     int var_b=C[a+5]-0;
	    
	     int var_c=D[a][b][a]*17;
	     int var_d=D[a-2][b][a-4]*20;
	  }

    return 0;
}