#include<stdio.h>
int main()
{ 
  int i, j , a[3][3] , b[3][3] , c[3][3] ;

printf("enter matrix a:");
 for(i=0;i<3;i++)
    {   
      for(j=0;j<3;j++)
        {  
            scanf( "%d", &a[i][j] ); 
        }
     }

printf("enter matrix b:");
    
 for(i=0;i<3;i++)
    {   
      for(j=0;j<3;j++)
        {  
            scanf( "%d", &b[i][j] ); 
        }
     }
 
 for(i=0;i<3;i++)
    {   
      for(j=0;j<3;j++)
        {  
            if(i==j) 
           c[i][j]=a[i][j]+b[i][j] ;
            else
           c[i][j]=a[i][j] ;
         }

     }      

printf("so matrix c is :");
    
 for(i=0;i<3;i++)
    {   
      for(j=0;j<3;j++)
        {  
            printf( "%d", c[i][j] ); 
        }
    printf("\n"); 
}
 return 0;
}
         
     

