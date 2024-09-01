#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    /***********************************************sheet1****************************/
    /******************1**********************/
    /*
    string name;
    cin>>name;
    cout<<"Hello, "<<name;
    */
    /***************2**************/
    /*
    int num1;
    long long num2;
    char num3;
    float num4;
    double num5;
    cin>>num1>>num2>>num3>>num4>>num5;
    cout<<num1<<"\n";
    cout<<num2<<"\n";
    cout<<num3<<"\n";
    cout<<num4<<"\n";
    cout<<num5<<"\n";*/

    /*************3*****************/
    /*
    long long num1,num2;
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    */

    /****************4*****************/
    /*
    long long a,b,c,d,Difference;
    cin>>a>>b>>c>>d;
    Difference=(a*b)-(c*d);
    cout<<"Difference = "<<Difference;   */

    /*********************5************************/
    /*
    double r,area;
    cin>>r;
    area =3.141592653*r*r;
    cout<< fixed << setprecision(9)<<area;  */


    /******************6**********************/
    /*
    long long num1,num2;
    cin>>num1>>num2;
    cout<<((num1%10)+(num2%10));   */

    /**************7*******************************/
    /*
    long long n , sum=0;
    cin>>n;
    sum =n*(n+1)/2;
    cout<<sum;   */

    /*****************8************************/
    /*
    double num1 ,num2 ,res;
    cin>>num1>>num2;
    res = num1/num2;
    cout<<"floor "<<num1<<" / "<<num2<<" = "<<floor(res)<<endl;
    cout<<"ceil "<<num1<<" / "<<num2<<" = "<<ceil(res)<<endl;
    cout<<"round "<<num1<<" / "<<num2<<" = "<<round(res)<<endl;     */

    /*****************9***********************/
   /*
    int num1,num2;
    cin>>num1>>num2;
    if(num1>=num2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;     */

    /*****************10******************/
    /*
    int num1,num2;
    cin>>num1>>num2;
    if((num1%num2==0)||(num2%num1==0))
        cout <<"Multiples";
    else
        cout<<"No Multiples";

        */

    /******************11**********************/
    /*
    int n1,n2,n3 , mi,ma;
    cin>>n1>>n2>>n3;
    mi = min(n1,n2);
    mi=min(mi,n3);
    cout<<mi<<" ";
    ma=max(n1,n2);
    ma=max(ma,n3);
    cout<<ma;
    */
    /****************12**********************/
    /*
    string name1,dad1, name2, dad2;
    cin>>name1>>dad1>>name2>>dad2;
    if(dad1==dad2)
        cout<<"ARE Brothers";
    else
        cout<<"NOT";*/
    /*************13****************/
    /*
    char x;
    cin>>x;
    if(x>='0' && x<='9')
        cout<<"IS DIGIT";
    else if(x>='A' && x<='Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(x>='a' && x<='z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    */

    /***********14****************/
    /*
    char x , res1;
    int res;
    cin>>x;
    if(x>='a' && x<='z')
    {
        res = x-32;
        res1 = res;
        cout<<res1;
    }

    else if(x>='A' && x<='Z')
    {
        res = x+32;
        res1 = res;
        cout<<res1;
    }
    */
    /***************15******************/
    /*
    int num1,num2;
    char op;
    cin>>num1>>op>>num2;
    if (op =='+')
        cout<<num1+num2<<endl;
    else if (op =='-')
        cout<<num1-num2<<endl;
    else if(op =='*')
        cout<<num1*num2<<endl;
    else
        cout<<num1/num2<<endl;
        */

    /***********************16*****************/
    /*
    int num ,res;
    cin>>num;
    res = num/1000;
    if(res%2 ==0)
        cout<<"EVEN";
    else
        cout<<"ODD";
        */

    /**************17****************/
    /*
    float x,y;
    cin>>x>>y;
    if(x==0 && y==0 )
        cout<<"Origem";
    else if(x>0 && y>0)
        cout<<"Q1";
    else if(x>0 && y<0)
        cout<<"Q4";
    else if(x<0 && y>0)
        cout<<"Q2";
    else if(x<0 && y<0)
        cout<<"Q3";
    else if(x==0 && y!=0)
        cout<<"Eixo Y";
    else if((y==0 && x!=0))
        cout<<"Eixo X";
        */
    /**************18***************/
    /*
    int n , year , mon , days , rem;
    cin>>n;            //400
    rem = n%365;       //400-365 = 35
    year = n/365;     //1
    mon = rem/30;      //1
    days = rem%30;     //5
    cout<<year<<" years\n";
    cout<<mon<<" months\n";
    cout<<days<<" days\n";
    */
    /**********19*****************/
    /*
    float num;
    cin>>num;
    if (num >=0 && num<=25)
        cout<<"Interval [0,25]";
    else if (num>25 && num<=50)
        cout<<"Interval (25,50]";
    else if(num>50 && num<=75)
        cout<<"Interval (50,75]";
    else if(num>75 && num<=100)
        cout<<"Interval (75,100]";
    else
        cout<<"Out of Intervals";
        */

    /***************20**************/

    /*
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c)
    {
        if(b<=c)
        {
          cout<<a<<endl<<b<<endl<<c<<endl;
          cout<<endl;
        }
        else
        {
          cout<<a<<endl<<c<<endl<<b<<endl;
          cout<<endl;
        }

    }
    else if(b<=a &&b<=c)
    {
        if(a<=c)
        {
          cout<<b<<endl<<a<<endl<<c<<endl;
          cout<<endl;
        }
        else
        {
          cout<<b<<endl<<c<<endl<<a<<endl;
          cout<<endl;
        }
    }
    else
    {
        if(b<=a)
        {
          cout<<c<<endl<<b<<endl<<a<<endl;
          cout<<endl;
        }
        else
        {
          cout<<c<<endl<<a<<endl<<b<<endl;
          cout<<endl;
        }

    }



    cout<<a<<endl<<b<<endl<<c;


    */

 /**********************21*****************/
 /*
    float num_f , num_d;
    int num_i ;
    cin>>num_f;   //234.123
    num_i = num_f;  //234
    num_d = num_f - num_i;   // 234.123 -234 =.123
    if( num_d ==0)
        cout<<"int "<<num_i;
    else if(num_d)
        cout<<"float "<<num_i<<" "<<num_d;*/

  /*****************22*****************/
  /*

  int num1,num2;
  char op;
  cin>>num1>>op>>num2;
  switch(op)
  {
  case '>':
    if(num1>num2)
       cout<<"Right";
    else
       cout<<"Wrong";
    break;
  case '<':
    if(num1<num2)
       cout<<"Right";
    else
       cout<<"Wrong";
    break;
  case '=':
    if(num1==num2)
       cout<<"Right";
    else
       cout<<"Wrong";
    break;

  }
  */


/****************23***********/
/*

   int num1,num2 ,res=0 , enterAns;
   char op , op_sign;
   cin>>num1>>op>>num2>>op_sign>>enterAns;
   switch(op)
   {
   case '+':
    res=num1+num2;
    if(res == enterAns)
        cout<<"Yes";
    else
        cout<<res;
    break;
   case '-':
    res = num1-num2;
    if(res == enterAns)
        cout<<"Yes";
    else
        cout<<res;
    break;
   case '*':
    res = num1*num2;
    if(res == enterAns)
        cout<<"Yes";
    else
        cout<<res;
    break;
   }
*/
   /*****************24*******************/
          /*
          [trying]

    int n1,n2,r1,r2;
    cin>>n1>>n2>>r1>>r2;
    if(((n1<=n2 && r1<=r2 &&(n2-r1)>=0)))
       cout<<r1<<" "<<r2;
    else if((n1>=n2 && r1>=r2 &&(n1-r2)>=0))
        cout<<r2 <<" "<<n1;
    else if(n1<=r1 &&n2<=r2)
        cout<<n1<<" "<<n2;
    else if(r1<=n1 &&r2<=n2)
        cout<<r1<<" "<<r2;
    else
        cout<<-1;

        */                            /*
    int num1,num2,num3,num4 , start,endd;
    cin>>num1>>num2>>num3>>num4;
    if((num3<num1 &&num4<num1)||(num3>num2 && num4>num2))
    {
        cout<<-1<<endl;
    }
    else
    {
        if(num1>num3)
            start = num1;
        else
            start = num3;
        if(num2>num4)
            endd = num4;
        else
            endd = num2;
        cout<<start<<" "<<endd;
    }
               */

    /*****************25**************/
    /*
    int n1,n2,n3,n4;
    int res;
    cin>>n1>>n2>>n3>>n4;

    n1%=100;
    n2%=100;
    n3%=100;
    n4%=100;
    res = (n1*n2*n3*n4);
    if(res %100<=9)
        cout<<"0"<<res%100<<endl;
    else
        cout<<res%100;
        */

    long long n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    /* not true becouse the max num is 10^7 and num2 is 10^12 so thier is no data type will be store thid number soooooo*/
    /*      if(pow(n1,n2) > pow(n3,n4))
                cout<<"YES";
            else
                cout<<"NO";          */
    /**************** true answer ***************/
    cout<<((n2*log(n1)>n4*log(n3))?"YES":"NO")<<endl;
    return 0;
}
