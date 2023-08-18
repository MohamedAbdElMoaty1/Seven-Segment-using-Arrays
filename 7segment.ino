int segment[7]={2,3,4,5,6,7,8};
int number[10][7]={ 
{1,1,1,1,1,1,0}, 
{0,1,1,0,0,0,0}, 
{1,1,0,1,1,0,1}, 
{1,1,1,1,0,0,1}, 
{0,1,1,0,0,1,1}, 
{1,0,1,1,0,1,1}, 
{1,0,1,1,1,1,1}, 
{1,1,1,0,0,0,0}, 
{1,1,1,1,1,1,1}, 
{1,1,1,0,0,1,1}};

int y = 0 ;

void setup()
{
  for(int i=0;i<=6;i++)
  {
  pinMode(segment[i],OUTPUT);
  }
  
}

void loop()
{
 
  for(int x=0;x<=6;x++)
  {  
  digitalWrite(segment[x],number[y][x]);
  } 
    delay(1200);
  if(++y>=10)y=0;
  
}