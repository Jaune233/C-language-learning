/*
int Add(intx,inty)
{
    int z;
    z=x+y;
    return z;

}
*/

int Add(num1,num2)
{
    int z;
    z=num1+num2;
    return z;
}
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    // int sum=num1+num2;
    int sum=Add(num1,num2);
    printf("%d\n",sum);
    return 0;
}