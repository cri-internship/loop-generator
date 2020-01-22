#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(870, "zeros");
	int *C = create_one_dim_int(110, "zeros");
	int **E = create_two_dim_int(500, 50, "zeros");
	int **B = create_two_dim_int(730, 320, "zeros");
	int **A = create_two_dim_int(370, 820, "zeros");

	for (int c = 3; c < 50; c++)
	  for (int b = 5; b < 110; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      B[a][b]=A[a][b]-E[a][b];
	      B[a+2][b+1]=D[a]-C[a];
	      
	      int var_a=D[a]/27;
	      int var_b=D[a-5]*5;
	      
	      int var_c=E[a][b]*17;
	      int var_d=E[a][b-3]/30;
	      
	      C[a]=C[a]+B[a][b]*28;
	      D[a]=C[a-1]-38*A[a][b];
	      
	      int var_e=E[a][b]+36;
	      int var_f=E[a-1][b]+6;
	    }

    return 0;
}