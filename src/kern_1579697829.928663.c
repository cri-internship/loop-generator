#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(130, 420, "ones");
	int ***A = create_three_dim_int(460, 290, 510, "ones");
	int **B = create_two_dim_int(50, 110, "ones");

	for (int c = 5; c < 506; c++)
	  for (int b = 5; b < 105; b++)
	    for (int a = 5; a < 45; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-5]/34;
	      
	      A[a][b][c]=A[a+1][b+4][c+4]/B[a][b];
	      
	      B[a][b]=23;
	      B[a+4][b+4]=43;
	      
	      B[a][b]=B[a][b]-C[a][b]+A[a][b][c];
	      C[a][b]=B[a-2][b-1]/C[a][b];
	      
	      int var_a=B[a][b]+47;
	      int var_b=B[a+2][b+5]-11;
	      
	      A[a][b][c]=C[a][b]/A[a][b][c]*B[a][b];
	      C[a][b]=C[a-5][b-5]/A[a][b][c]+B[a][b];
	      
	      int var_c=B[a][b]*39;
	      int var_d=B[a+5][b]/28;
	    }

    return 0;
}