#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(310, 790, "zeros");
	int ***A = create_three_dim_int(790, 520, 830, "zeros");
	int *C = create_one_dim_int(80, "zeros");
	int *D = create_one_dim_int(10, "zeros");

	for (int b = 5; b < 517; b++)
	  for (int a = 5; a < 77; a++)
	  {
	    
	     C[a]=C[a+3]-A[a][b][a]+B[a][b];
	    
	     B[a][b]=36;
	     B[a-5][b-5]=28;
	    
	     C[a]=B[a][b]*D[a]+C[a]/A[a][b][a];
	     D[a]=B[a+1][b+4]*A[a][b][a]-C[a]+11;
	    
	     A[a][b][a]=A[a][b][a]+C[a]/B[a][b];
	     B[a][b]=A[a+4][b+3][a+2]*44;
	    
	     A[a][b][a]=B[a][b]/A[a][b][a]-C[a];
	     B[a][b]=B[a][b-5]/A[a][b][a]-C[a]+D[a];
	    
	     int var_a=A[a][b][a]+45;
	     int var_b=A[a][b-4][a-5]-2;
	  }

    return 0;
}