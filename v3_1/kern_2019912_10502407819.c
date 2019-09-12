#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int *A = create_one_dim_int(100, "random");

	for (int c = 0; c < 42; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 7; a < 48; a++)
	    {
	      
	      A[a-2]=32;
	      float  var_a=A[a-7]-A[a-2]/12;
	      
	      C[a+2][b][c]=C[a-3][b][c]*B[a][b];
	      
	      C[a][b][c]=C[a-1][b][c]+20;
	      
	      int var_b=A[a+2]-17;
	      A[a+2]=28;
	      
	      C[a][b][c]=C[a+1][b][c+8]*25-A[a];
	      
	      C[a][b][c]=C[a+1][b][c]+35;
	      
	      A[a-3]=6;
	      A[a-3]=B[a][b]*C[a][b][c];
	      
	      int var_c=A[a-3]-23;
	      int var_d=A[a-5]/29;
	      
	      B[a][b]=C[a][b][c]+B[a][b];
	      
	      int var_e=C[a][b][c]/28;
	    }

    return 0;
}