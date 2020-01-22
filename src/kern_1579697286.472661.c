#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(800, "zeros");
	int **D = create_two_dim_int(580, 370, "zeros");
	int *A = create_one_dim_int(860, "zeros");
	int *C = create_one_dim_int(800, "zeros");
	int ***B = create_three_dim_int(60, 850, 800, "zeros");

	for (int b = 0; b < 366; b++)
	  for (int a = 0; a < 580; a++)
	  {
	    
	     int var_a=A[a]-46;
	     A[a]=48;
	    
	     C[a]=E[a]*B[a][b][a]/A[a];
	     E[a]=D[a][b]-C[a];
	    
	     B[a][b][a]=D[a][b]+E[a];
	     D[a][b]=E[a];
	    
	     C[a]=C[a+5]*A[a]/B[a][b][a]+D[a][b];
	    
	     A[a]=A[a+5]+E[a];
	    
	     D[a][b]=D[a][b+4]-E[a]*A[a]+C[a]/37;
	    
	     D[a][b]=C[a]+E[a]/A[a];
	     A[a]=C[a+1]-D[a][b]+A[a]/B[a][b][a]*E[a];
	  }

    return 0;
}