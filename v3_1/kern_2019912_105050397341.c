#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50, "random");
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");

	for (int c = 0; c < 42; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 7; a < 48; a++)
	    {
	      
	      A[a-2]=40;
	      float  var_a=A[a-7]-A[a-2]/49;
	      
	      C[a+2][b][c]=C[a-3][b][c]/A[a]-B[a][b];
	      
	      C[a][b][c]=C[a-1][b][c]+38;
	      
	      int var_b=A[a+2]-A[a+5]*7;
	      A[a+2]=18;
	      
	      C[a][b][c]=C[a+1][b][c+8]-B[a][b]+A[a];
	      
	      C[a][b][c]=C[a+1][b][c]+6;
	      
	      A[a-3]=19/B[a][b];
	      A[a-3]=C[a][b][c];
	      
	      int var_c=A[a-3]+29;
	      int var_d=A[a-1]/24;
	      
	      B[a][b]=C[a][b][c]+37;
	      
	      int var_e=C[a][b][c]*18;
	    }

    return 0;
}