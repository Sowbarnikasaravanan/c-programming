/* To display the right half pyramid 
    *
   **
  ***
 ****
*****
*/
void main(){
    int i,j,k,num;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
       for(j=0;j<2*(num-i)-1;j++){
           printf(" ");
       }
       for(k=0;k<=i;k++){
           printf(" *");
       }
       printf("\n");
    }
}
