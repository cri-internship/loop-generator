#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(860, "zeros");
	int **E = create_two_dim_int(600, 20, "zeros");
	int **B = create_two_dim_int(930, 910, "zeros");
	int *A = create_one_dim_int(860, "zeros");
	int **D = create_two_dim_int(400, 520, "zeros");

	for (int b = 5; b < 20; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     D[a][b]=D[a-5][b-5]+C[a];
	    
	     C[a]=C[a]/B[a][b]*E[a][b]+D[a][b]-A[a];
	     C[a]=B[a][b]-E[a][b]*D[a][b];
	    
	     int var_a=E[a][b]*0;
	     int var_b=E[a][b-4]-35;
	    
	     E[a][b]=A[a]+C[a]-E[a][b]*B[a][b];
	     B[a][b]=A[a+1]-22*C[a];
	  }

    return 0;
}