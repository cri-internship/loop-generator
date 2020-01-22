#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(920, 950, 750, "ones");
	int *C = create_one_dim_int(820, "ones");
	int ***E = create_three_dim_int(940, 390, 620, "ones");
	int *D = create_one_dim_int(180, "ones");
	int *A = create_one_dim_int(880, "ones");

	for (int b = 1; b < 390; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     E[a][b][a]=E[a][b-1][a-4]+A[a];
	    
	     A[a]=A[a-3]/D[a]+B[a][b][a]-C[a];
	    
	     B[a][b][a]=B[a+2][b+5][a+4]+E[a][b][a]-D[a]*C[a]/A[a];
	    
	     B[a][b][a]=B[a+3][b+2][a+3]*24;
	    
	     D[a]=15/A[a];
	     D[a-5]=E[a][b][a]-B[a][b][a]/C[a]*A[a];
	    
	     A[a]=4;
	    
	     int var_a=E[a][b][a]/29;
	     int var_b=E[a+2][b][a+5]+45;
	  }

    return 0;
}