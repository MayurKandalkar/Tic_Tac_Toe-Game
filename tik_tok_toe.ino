//int a=0;
//int b=0;
//int c=0;
//int d=0;
//int e=0;
//int f=0;
//int g=0;
//int h=0;
//int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
//  pinMode(8,OUTPUT);
//  pinMode(9,OUTPUT);
//  pinMode(10,OUTPUT);
//  pinMode(11,OUTPUT);
//  pinMode(12,OUTPUT);
//  pinMode(13,OUTPUT);
//  pinMode(14,OUTPUT);
//  pinMode(15,OUTPUT);
//  pinMode(16,OUTPUT);
//  pinMode(17,OUTPUT);
//  pinMode(18,OUTPUT);
//  pinMode(19,OUTPUT);
  pinMode(22,INPUT_PULLUP);
  pinMode(23,INPUT_PULLUP);
  pinMode(24,INPUT_PULLUP);
//  pinMode(25,INPUT_PULLUP);
//  pinMode(26,INPUT_PULLUP);
//  pinMode(27,INPUT_PULLUP);
//  pinMode(28,INPUT_PULLUP);
//  pinMode(29,INPUT_PULLUP);
//  pinMode(30,INPUT_PULLUP);
Serial.begin(9600);
  
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  

  int k=digitalRead(22);
  Serial.print(k);
//  if(k==1 && a==0)
//  {
//    digitalWrite(2,1);
//    a++;
//    }
//    else
//    {
//   digitalWrite(2,0);
//   }
//   if (k==1 && a==1)
//   {
//    digitalWrite(3,1);
//   }
//   else
//   {
//    digitalWrite(3,0);
//   }
   
//   int l=digitalRead(23);
//  if(l==1 && b==0)
//  {
//    digitalWrite(4,1);
//    b++;
//    }
//    else
//    {
//   digitalWrite(4,0);
//   }
//   if(l==1 && b==1)
//   {
//    digitalWrite(5,1);
//   }
//   else
//   {
//    digitalWrite(5,0);
//   }
//    
//   int m=digitalRead(24);
//  if(m==1 && c==0)
//  {
//    digitalWrite(6,1);
//    c++;
//    }
//    else
//    {
//   digitalWrite(6,0);
//   }
//   if(m==1 && c==1)
//   {
//    digitalWrite(7,1);
//   }
//   else
//   {
//    digitalWrite(7,0);
//   }
//   int n=digitalRead(25);
//  if(n==1)
//  {
//    digitalWrite(8,1);
//    d++;
//    }
//    else
//    {
//   digitalWrite(8,0);
//   }
//   if(n==1 && d==1)
//   {
//    digitalWrite(9,1);
//   }
//   else
//   {
//    digitalWrite(9,0);
//   }
//   int o=digitalRead(26);
//  if(o==1)
//  {
//    digitalWrite(10,1);
//    e++;
//    }
//    else
//    {
//   digitalWrite(10,0);
//   }
//   if(o==1 && e==1)
//   {
//    digitalWrite(11,1);
//   }
//   else
//   {
//    digitalWrite(11,0);
//   }
//   int p =digitalRead(27);
//  if(p==1)
//  {
//    digitalWrite(12,1);
//    f++;
//    }
//    else
//    {
//   digitalWrite(12,0);
//   }
//   if(p==1 && f==1)
//   {
//    digitalWrite(13,1);
//   }
//   else
//   {
//    digitalWrite(13,0);
//   }
//   int q=digitalRead(28);
//  if(q==1)
//  {
//    digitalWrite(14,1);
//    g++;
//    }
//    else
//    {
//   digitalWrite(14,0);
//   }
//   if(q==1 && g==1)
//   {
//    digitalWrite(15,1);
//   }
//   else
//   {
//    digitalWrite(15,0);
//   }
//   int r=digitalRead(29);
//  if(r==1)
//  {
//    digitalWrite(16,1);
//    h++;
//    }
//    else
//    {
//   digitalWrite(16,0);
//   }
//   if(r==1 && h==1)
//   {
//    digitalWrite(17,1);
//   }
//   else
//   {
//    digitalWrite(17,0);
//   }
//   int s=digitalRead(30);
//  if(s==1)
//  {
//    digitalWrite(18,1);
//    i++;
//    }
//    else
//    {
//   digitalWrite(18,0);
//   }
//   if(s==1 && i==1)
//   {
//    digitalWrite(19,1);
//   }
//   else
//   {
//    digitalWrite(19,0);
//
//  }
}
