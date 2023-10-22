int main()
{
    int mood=0;
    while(mood<365)
    {
      printf("mood=%d", mood);
      mood++;   
    }
    if(mood==365)
    {
       printf("full mood");
    }
    return 0;
}
