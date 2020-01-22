#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "ones");
	int **D = create_two_dim_int(170, 700, "ones");
	int *E = create_one_dim_int(270, "ones");
	int *C = create_one_dim_int(590, "ones");
	int *B = create_one_dim_int(280, "ones");

	for (int c = 5; c < 267; c++)
	  for (int b = 5; b < 267; b++)
	    for (int a = 5; a < 267; a++)
	    {
	      
	      A[a]=A[a-5]+34;
	      
	      C[a]=B[a]+D[a][b]*A[a]/E[a];
	      C[a+2]=B[a]+E[a];
	      
	      int var_a=E[a]+6;
	      int var_b=E[a+3]*35;
	      
	      D[a][b]=E[a]*7/B[a];
	    }

    return 0;
}