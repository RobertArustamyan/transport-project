//Test 1

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout<<"This is not first C++ code";
//     return 0;
// }


//Test 2

 //#include <iostream>

 //using namespace std;

 //int main()
 //{
 //    int x;//haytararvuma popoxakany
 //    x = 2023;
 //    cout<<"cragiry tpuma popoxakani arjeqy X:";
 //    cout<<x;

 //    return 0;
 //}

// Test 3

// #include <iostream>

// using namespace std;

// int main()
// {
//     int mililitter,liters;
//     cout<<"greq mililitreri tivy mililitter:";
//     cin>>mililitter;
//     liters = mililitter / 1000;
//     cout<<"litrnery : "<<liters;

//     return 0;
// }


// Test 4 nmana test 3 in bayc amboxj tverov

// #include <iostream>

// using namespace std;

// int main()
// {
//     double mililitr, litr;
//     cout<<"qani mililitr:";
//     cin>> mililitr;
//     litr = mililitr / 1000;
//     cout<<"litrery klini: "<<litr;

//     return 0;
// }

//Test 5

// #include <iostream>

// using namespace std;

// void myfunc();

// int main()
// {
//     cout<<"main() funkciayum.\n";
//     myfunc();
//     cout<<"eli main() funkciayum\n";

//     return 0; 
// }

// void myfunc(){
//     cout<<"myfunc funkciayum\n";

// }

// Test 6

 //#include <iostream>
 //#include <cstdlib>

 //using namespace std;

 //int main()
 //{
 //    cout<<abs(-10.9);

 //    return 0;
 //}


//Test 7

 //#include <iostream>

 //using namespace std;

 //void mul(int x, int y);

 //int main()
 //{
 //    mul(10,20);
 //    mul(5,6);
 //    mul(8,9);
 //}

 //void mul(int x, int y)
 //{
 //    cout<<x*y<<" ";
 //}


// Test 8

// #include <iostream>

// using namespace std;

// int mul(int x, int y);

// int main()
// {
//     int answer;
//     answer = mul(10,20);
//     cout<<"The answer is: "<<answer;

//     return 0;

// }

// int mul(int x, int y)
// {
//     return x * y;
// }

//test 9

// #include <iostream>

// using namespace std;

// int gumar(int x, int y);

// int main()
// {
//     int answer, num1, num2;
//     cout<<"Number 1 is :";
//     cin>>num1;
//     cout<<"Number 2 is :";
//     cin>>num2;
//     answer = gumar(num1,num2);
//     cout<<"The answer is :"<<answer;
// }

// int gumar(int x,int y)
// {
//     return x + y;
// }


//Test 9.2 ?

// #include <iostream>

// using namespace std;

// int gumar();

// int main()
// {
//     int answer;
//     answer = gumar();
//     cout<<"Answer: "<<answer;

//     return 0;
// }

// int gumar()
// {
//     int x,y;
//     cout<<"Num1:";
//     cin>>x;
//     cout<<"Num2:";
//     cin>>y;

//     return x + y;
// }


//Test 10

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Num1: ";
//      cin>>a;
//     cout<<"Num2: ";
//      cin>>b;

//     if(a<b)cout<<"num1 < num2";

//     return 0;
// }

//Test 11

// #include <iostream>

// using namespace std;

// int main()
// {
//     int count;

//     for(int count =0;count<100;count=count  +1)
//      cout<<count<<" ";

//     return 0;
// }


//Test 12


// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//      cin>>x;
//     if(x<10){
//         cout<<"Poqr a, aveli mec tiv greq: ";
//          cin>>x;
//     }
// }

//Test 13


 //#include <iostream>

 //using namespace std;

 //int main()
 //{
 //    int a,b;
 //    cout<<"a = ";cin>>a;
 //    cout<<"b = ";cin>>b;
 //    if(a<b){
 //        cout<<"a < b \n";
 //        cout<<"Tarberuty klini: "<<b-a;

 //    }

 //    return 0;
 //}


//Test 14 local popoxakan

// #include <iostream>

// using namespace std;

// void func();

// int main()
// {
//     int x; // x y hamarvuma local popoxakan main i hamar
//     x = 10;
//     func();

//     cout<<"\n";
//     cout<<x;

//     return 0;
// }

// void func()
// {
//     int x;//local popoxakan func funkciayi hamar;
//     x = -199;

//     cout<<x;
// }


//Test 15 GLobal popoxakan

 //#include <iostream>

 //using namespace std;

 //void func1();
 //void func2();

 //int count = 1;

 //int main()
 //{
 //    int i;
 //    for(i=0;i<10;i++){
 //        count=i*2;
 //        func1();
 //    }
 //    return 0;
 //}

 //void func1()
 //{
 //    cout<<"count: "<<count;
 //    cout<<"\n";
 //    func2();
 //}

 //void func2()
 //{
 //    int count;
 //    for(count=0;count<3;count++)cout<<".";
 //}

//Test 16

// #include <iostream>

// using namespace std;

// int main()
// {
//     short int i;
//     short unsigned int j;

//     j = 60000;
//     i = j;
//     cout<<i<<""<<j;

//     return 0;
// }


//test 17


// #include <iostream>

// using namespace std;

// int main()
// {
//     char letter;

//     for(letter='A';letter<='Z';letter++)cout<<letter;

//     return 0;
// }


//Test 18

// #include <iostream>

// using namespace std;

// void total(int x);
// int main()
// {
//     cout<<"Hashvel 1 ic 5 i gumary\n";
//     total(5);
//     cout<<" Hahsvel 1ic 6 i gumary. \n";
//     total(6);

//     return 0;
// }

// void total(int x)
// {
//     int sum = 0;
//     int i, count;
//     for(i=1;i<=x;i++){
//         sum = sum + i;
//         for(count=0;count<10;count++)cout<<".";
//         cout<<"yntacqayin tivy havasara"<<sum<<"\n";
//     }
// }



//Test 19

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x,y;

//     x = 10;
//     y = 3;
//     cout<<x/y<<"\n";
//     cout<<x%y<<"\n";

//     x = 1;
//     y = 2;
//     cout<<x/y<<" "<<x%y;

//     return 0;

// }

//Test 20


 //#include <iostream>

 //using namespace std;

 //int main()
 //{
 //    int x = 10;

 //    cout<<x++-2*4;
 //    cout<<x;
 //}



//Test 21

// #include <iostream>

// using namespace std;

// bool Xor(bool a,bool b);

// int main()
// {
//     bool p,q;
//     cout<<"Nermuceq P-n(0 kam 1): ";
//      cin>>p;
//     cout<<"Nermuceq Q-n(0 kam 1): ";
//      cin>>q;
//     cout<<"P ev Q: "<<(p&&q)<<'\n';
//     cout<<"P kam Q: "<<(p||q)<<'\n';
//     cout<<"P Xor Q: "<<Xor(p,q)<<'\n';

//     return 0;
// }

// bool Xor(bool a,bool b)
// {
//     return(a||b)&&!(a&&b);
// }


//Test 22

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         cout<<i<<"/2 havasar e: "<<(float)i/2<<"\n";
//     }

//     return 0;
// }


//test 23  IF

// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     int magic;
//     int guess;
//     magic = rand();

//     cout<<"Greq tvi dzer tarberaky: ";
//      cin>>guess;

//     if(magic == guess)cout<<"Gushakeciq";
//     else
//     { 
//         cout<<"Duq sxalveciq\n";

//         if(guess > magic)cout<<"Dzer tivy aveli mec e: \n";
//         else cout<<"Dzer tivy aveli poqr e: \n";
//     }
//     return 0;
// }


//test 24


// #include <iostream>

// using namespace std;

// int main()
// {
//     float a, b;
//     cout<<"Greq 2 tvanshan: ";
//      cin>>a>>b;

//     if(b!= 0)cout<<a/b<<'\n';
//     else cout<<"0 i vra bajanel chi kareli\n";

//     return 0;
// }


//test 25  else if


// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;

//     for(x=0;x<4;x++){
//         if(x==1)cout<<"X = 1\n";
//         else if(x==2)cout<<"X = 2\n";
//         else if(x==3)cout<<"X = 3\n";
//         else if(x==4)cout<<"X = 4\n";
//         else cout<<"X y 1 ic 4 diapazonic dursa \n";


//     }

//     return 0;
// }



// test 26
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int num;

//     double sq_root;

//     for(num=1;num<100;num++){
//         sq_root = sqrt((double)num);
//         cout<<num<<"--"<<sq_root<<'\n';
//     }

//     return 0;
// }

//test 27

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//     for(x=-100;x<=100;x=x+5)cout<<"X: "<<x<<'\n';

//     return 0;
// }


//test  28
// #include <iostream>

// using namespace std;

// int main()
// {
//     int x, y;

//     for(x=0,y=10;x<=10;x++,y--)cout<<x<<"|"<<y<<'\n';
// }


//Test 29

// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main()
// {
//     int i;

//     for(i=0;!kbhit();i++)cout<<i<<',';

//     return 0;
// }


//Тест 30

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//     for(x=0;x!=123;){

//         cout<<"Greq x: ";
//          cin>>x;
//     }

//     return 0;

// }




//test 30

// #include <iostream>
// #include <conio.h>
// using namespace std;


// int main()
// {
//     for(;!kbhit();){
//         cout<<"-.";
//     }
// }


//test 31

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//      cin>>x;

//     if(x==1){cout<<"1--";}
//     else if(x==2){cout<<"2--";}
//     else if(x==3){cout<<"3--";}
//     else if(x==4){cout<<"4--";}
//     else if(x==5){cout<<"5--";}
//     else cout<<"Mec a 5ic";
// }


//Test 32 SWICH


// #include <iostream>

// using namespace std;

// int main()
// {
//     int choise;

//     cout<<"Vor temana dzez hetaqrqrum: \n\n";

//     cout<<"\t 1.for\n";
//     cout<<"\t 2.if\n";
//     cout<<"\t 3.switch\n\n";

//     cout<<"Vorne dzez hetaqrqir(1-3)\? ";
//      cin>>choise;

//     switch (choise)
//     {   
//         case 1:
//             cout<<"For y amena universal ciklna C++ i mej\n";
//             break;
//         case 2:
//             cout<<"If y chyuxavorman hamara\n";
//             break;
//         case 3:
//             cout<<"Aveli shat chuxavorman hamara\n";
//             break;
//         default:
//             cout<<"Dzer yntrac tivy chi patkanum (1-3) mijakayqin\n";

//     }

//     return 0;
// }



//test 33


// #include <iostream>

// using namespace std;

// int main()
// {
//     int i;

//     for(i=0;i<5;i++){
//         switch(i){
//             case 0:cout<<"poqra 1\n";
//                 break;
//             case 1:cout<<"poqra 2\n";
//                 break;
//             case 2:cout<<"poqra 3\n";
//                 break;
//             case 3:cout<<"poqra 4\n";
//                 break;
//             case 4:cout<<"poqra 5\n";
//                 break;

//         }
//         cout<<"\n";
//     }

//     return 0;
// }


//test 34

// #include <iostream>

// using namespace std;

// int main()
// {
//     char ch = 32;

//     while(ch){
//         cout<<ch;
//         ch++;
//     }

//     return 0;
// }

//test 35

// #include <iostream>

// using namespace std;

// int main()
// {
//     int len;
//     cout<<"Greq erkarutyun 1ic 79";
//      cin>>len;
//     while(len>0 && len<80){
//         cout<<".";
//         len--;
//     }

//     return 0;
// }


//test 36

// #include <iostream>

// using namespace std;

// int main()
// {
//     int x;
//     do{
//         cout<<"Greq tiv(100): ";
//          cin>>x;
//     }while(x!=100);
// }


//test 37

// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     int magic;
//     int guess;

//     magic = rand();

//     do{
//         cout<<"Greq dzer tarberaky: ";
//          cin>>guess;

//         if(magic == guess){
//             cout<<"Chishta";
//         }
//         else{
//             cout<<"Duq sxalvecuq\n";
//             if(magic<guess){
//                 cout<<"Dzer meca  iskakanic\n";
//             }
//             else{
//                 cout<<"Dzer poqra  iskakanic\n";
//             }

//         }
//     }while(guess!=magic);

//     return 0;
// }

//Тест 38

// #include <iostream>

// using namespace std;

// int main()
// {
//     int t;
//     for(t=0;t<15;t++){
//         if(t==10){
//             continue;
//         }

//         cout<<t<<"|";
//     }
	
//     return 0;
// }


//test 39 PARZ TVER 

// #include <iostream>

// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=2;i<1000;i++){
//         for(j=2;j<=(i/j);j++){
//             if(!(i%j)) break;
//         }
//         if(j>(i/j))cout<<i<<"Parz tiv\n";
//     }
//     return 0;
// }

//Test 40 Gushakir tivy

// #include <iostream>
// #include <cstdlib>

// using namespace std;

// void play(int m);

// int main(){
//     int option;
//     int magic;

//     magic = rand();

//     do{
//         cout<<"1.Stanal nor magic tiv\n";
//         cout<<"2.Xaxal\n";
//         cout<<"3.Durs gal cragric\n";
//         do{
//             cout<<"Greq dzer tarberaky: ";
//              cin>>option;
//         }while(option<1 || option>3);

//         switch (option)
//         {
//         case 1:
//             magic = rand();
//             break;

//         case 2:
//             play(magic);
//             break;
//         case 3:
//             cout<<"Durs gal cragric\n";
//             break;    
//         }
//     }while(option!=3);

//     return 0;
// }

// void play(int m)
// {
//     int t,x;
//     for(t=0;t<100;t++){
//         cout<<"Gushakeq tivy: ";
//          cin>>x;
//         if(x==m){
//             cout<<"Chisht e\n";
//             return;
//         }
//         else if(x > m){
//             cout<<"Tivy petq e aveli poqr lini\n";
//             return;
//         }
//         else{
//             cout<<"Tivy petq e aveli mec lini\n";
//             return;
//         }


//     }
//     cout<<"Pordzeri tivy prcav pordzeq krkin\n";
// }


//TEST 41 Arrays

// #include <iostream>

// using namespace std;

// int main()
// {
//     int sample[10];
//     int t;
//     for(t=0;t<10;++t)
//     {
//         sample[t] = t;
//     }
//     for(t=0;t<10;++t){
//         cout<<sample[t]<<'|';
//     }

//     return 0;
// }

//test 42


// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     int i,min_value,max_value;
//     int list[10];

//     for(i=0;i<10;i++)
//     {
//         list[i] = rand();
//     }

//     min_value = list[0];
//     for(i=1;i<10;i++){
//         if(min_value>list[i])min_value = list[i];
//     }
//     max_value = list[0];
//     for(i=1;i<10;i++){
//         if(max_value<list[i])max_value = list[i];
//     }

//     cout<<min_value<<"||"<<max_value;

//     return 0;
// }



//test 43 Sartirovka

// #include <iostream>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     int numbers[10];
//     int a,b,t;
//     int size;

//     size = 10;//qani element petqa darsvi

//     for(t=0;t<size;t++)numbers[t] = rand();

//     cout<<"Skzbnakan zangvac: ";

//     for(t=0;t<size;t++)cout<<numbers[t]<<"|";
//     cout<<"\n";

//     for(a=1;a<size;a++){
//         for(b=size-1;b>=a;b--){
//             if(numbers[b-1]>numbers[b]){
//                 t=numbers[b-1];
//                 numbers[b-1] = numbers[b];
//                 numbers[b] = t;
//             }
//         }
//     }
//     for(t=0;t<size;t++)cout<<numbers[t]<<"|";

//     return 0;
// }



//test 44

// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char str[100];
//     cout<<"Greq tox: ";
//     gets(str);
//     cout<<"aha dzer toxy: ";
//     cout<<str;
//     return 0;
// }


//test 45


// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     char str[80];
//     char str2[80];
//     strcpy(str,"Barev");
//     strcpy(str2,str);

//     cout<<str2;
//     return 0;
// }


//test 46

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     char s1[20],s2[20];

//     strcpy(s1,"barev");
//     strcpy(s2," bolorin");
//     strcat(s1,s2);

//     cout<<s1<<"||"<<s2;

//     return 0;
//}


//test 47

// #include <iostream>
// #include <cstring>
// #include <cstdio>

// using namespace std;

// bool password();

// int main()
// {
//     if(password())cout<<"Mutqy arvec.\n";
//     else cout<<"Sxal e.\n";

//     return 0;
// }

// bool password()
// {
//     char s[80];
//     cout<<"Greq paroly: ";
//     gets(s);
//     if(!strcmp(s,"parol"))
//     {
//         cout<<"Paroly chi lini.\n";

//         return false;
//     }

//     return true;
// }



//test 48


// #include <iostream>
// #include <cstring>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char s[80];
//     for(;;){
//         cout<<"Greq tox: ";
//         gets(s);
//         if(!strcmp(s,"elq")) break;
//     }

//     return 0;
// }

//test 49


// #include <iostream>
// #include <cstring>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char str[80];
//     cout<<"Greq naxadasutyun: ";
//     gets(str);
//     cout<<"\nnaxadasutyan erkarutyuny klini: "<<strlen(str);

//     return 0;
// }

//test 50 Tars string

// #include <iostream>
// #include <cstring>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char str[80];
//     int i;
//     cout<<"Greq naxadasutyuny: ";
//     gets(str);
//     for(i=strlen(str)-1;i>=0;i--){
//         cout<<str[i];
//     }
// }


//test 51 <cstring>

// #include <iostream>
// #include <cstring>
// #include <cstdio>

// using namespace std;

// int main()  
// {
//     char s1[80],s2[80];
//     cout<<"greq 2 naxadasutyun: ";
//     gets(s1);
//     gets(s2);
//     cout<<"1i erkarutyun: "<<strlen(s1)<<"\n";
//     cout<<"2i ekrarutyun: "<<strlen(s2)<<"\n";
//     if(!strcmp(s1,s2))cout<<"s1 yev s2 irar havasar en\n";
//     else cout<<"irar havasar chem\n";
//     strcat(s1,s2);
//     cout<<s1<<"\n";
//     strcpy(s1,s2);
//     cout<<s1<<"|"<<s2<<"\n";
//     cout<<"hima havasar en: ";

//     return 0;
// }

//test 52 mecatar

// #include <iostream>
// #include <cstring>
// #include <cctype>

// using namespace std;

// int main()
// {
//     char str[80];
//     int i;
//     strcpy(str,"test");
//     for(i=0;str[i];i++){
//         str[i] = toupper(str[i]);
//         cout<<str[i];
//     }

//     return 0;
// }

//test 53

// #include <iostream>
//  using namespace std;

//  int main(){
//     int i,t,sum,num[3][4];
//     sum = 1;
//     for(t=0;t<3;t++){
//         for(i=0;i<4;i++){
//             num[t][i] = sum;
//             sum++;
//             cout<<num[t][i];
//         }
//     }

//  }


//Test 54

// #include <iostream>

// using namespace std;

// int sqrs[10][2] = {1,1,2,4,5,25,6,36,7,49,8,64,9,81,10,100};

// int main()
// {
//     int i,j;
//     cout<<"Greq tiv 1ic 10: ";
//      cin>>i;

//     for(j=0;j<10;j++){
//         if(sqrs[j][0] == i)break;
//     }
//     cout<<sqrs[j][1];
// }

//test 55

// #include <iostream>
// #include <cstdio>

// using namespace std;


// int main()
// {
//     int t,i;
//     char text[100][80];
//     for(t=0;t<100;t++){
//         cout<<t<<":";
//         gets(text[t]);
//         if(!text[t][0])break;
//     }
//     for(i=0;i<t;i++)cout<<text[i]<<"\n";
// }

//tesst 56
// #include <iostream>

// using namespace std;

// char name[10][80];
// char phone[10][20];
// float hours[10];
// float wage[10];
// int menu();
// void enter(),report();
// int main()
// {
//     int choise;
//     do{
//         choise=menu();
//         switch (choise)
//         {
//         case 0:
//             break;
//         case 1:
//             enter();
//             break;
//         case 2:report();
//             break;
//         default:cout<<"Pordzeq noric.\n\n";    
//         }
//     }while(choise !=0);

//     return 0;
// }
// int menu()
// {
//     int choise;
//     cout<<"0: Durs gal cragric\n";
//     cout<<"1: Greq informacia\n";
//     cout<<"2: Atchetner\n";
//     cout<<"\n Yntreq";
//      cin>>choise;

//     return choise;
// }
// void enter()
// {
//     int i;
//     char temp[80];
//     for(i=0;i<10;i++){
//         cout<<"Greq azganuny: ";
//          cin>>name[i];
//         cout<<"Greq heraxosi hamary: ";
//          cin>>phone[i];
//         cout<<"ashxatac jameri qanaky: ";
//          cin>>hours[i];
//         cout<<"Oklad: ";
//          cin>>wage[i];
//     }
// }

// void report()
// {
//     int i;
//     for(i=0;i<10;i++){
//         cout<<name[i]<<""<<phone[i]<<"\n";
//         cout<<"Mi shabatva ashxatavardzy: "<<wage[i] * hours[i];
//         cout<<"\n";
//     }
// }

//test 57

// #include <iostream>

// using namespace std;
// int main()
// {
//     int balance;
//     int *balptr;
//     int value;

//     balance = 3200;
//     balptr = &balance;
//     value = *balptr;

//     cout<<balance<<"="<<value;

// }

//test 58

// #include <iostream>

// using namespace std;

// int main()
// {
//     int *p,num;
//     p = &num;
//     *p = 100;
//     cout<<num;
//     (*p)++;
//     cout<<num;
//     (*p)--;
//     cout<<num<<"\n";
// }


//test 59

// #include <iostream>

// using namespace std;

// int main()
// {
//     int *i,j[10];
//     double *f, g[10];
//     int x;
//     i = j;
//     f = g;
//     for(x=0;x<10;x++)
//         cout<<i+x<<" "<<f+x<<"\n";
// }


//test 60

// #include <iostream>

// using namespace std;

// int main()
// {
//     int *ad,i;
//     int sqr[30] = {1,2,3,4,5,6,7,8,9,10};
//     ad = sqr;
//     cout<<(*ad)+10;
// }

//test 61 Texty prable ov bajanox

// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char str[80];
//     char token[80];
//     char *p,*q;

//     cout<<"Greq naxadasutyuny vory uzumeq bajanel: ";
//     gets(str);
//     p = str;
//     while(*p){
//         q = token;
//         while(*p!=' '&& *p){
//             *q = *p;
//             q++;p++;
//         }
//         if(*p)p++;
//         *q = '\0';
//         cout<<token<<'\n';
//     }

//     return 0;

// }


// //test 61.2

// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     char str[80];
//     char token[80];
//     int i, j;
//     cout<<"Greq naxadasutyuny: ";
//     gets(str);

//     for(i=0;;i++){
//         for(j=0;str[i]!=' ' && str[i]; j++,i++)
//             token[j] = str[i];
//         token[j] = '\0';
//         cout<<token<<'\n';
//         if(!str[i])break;
//     }
//     return 0;
// }


//test 62

// #include <iostream>
// #include <cctype>

// using namespace std;

// int main()
// {
//     char str[80] = "I love you";
//     char *p;
//     int i;
//     p = str;
//     for(i=0;p[i];i++)
//     {
//         p[i] = toupper(p[i]);
//     }
//     cout<<p;

//     return 0;
// }

//test 63

// #include <iostream>

// using namespace std;

// int main()
// {
//     int num[10];
//     int *start,*end;
//     end = &num[9];
//     cout<<start;
//     while(start<=end){

//         cout<<"Greq tiv";
//          cin>>*start;

//         start++;
//     }
//     start = num;
//     while(start<=end){
//         cout<<*start<<"";
//         start++;
//     }
// }

//test64
// #include <iostream>
// #include <cstring>
// using namespace std;

// char *keyword[][2]=
// {
//         "for","Fory inkrementi paymanna",
//         "if","if y paymann else",
//         "switch","arjeqov",
//         "while","anuma minchhev",                
//         };

// int main()
// {
//     char str[80];
//     int i;
//     cout<<"greq key bary: ";
//     cin>>str;
//     for(i=0;*keyword[i][0];i++)
//     {
//         if(!strcmp(keyword[i][0], str))
//             cout<<keyword[i][1];
//     }
//     return 0;
// }


//test 65

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char a[80],b[80];
//     cin>>a;
//     cin>>b;
//     cout<<strcmp(a,b);    
// }

//test 66

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x,*p,**q,***d;
//     x = 10;
//     p = &x;
//     q = &p;
//     d= &q;

//     int *a,xumb[80];
//     a = xumb;
//     for(x= 10;x<20;x++)
//     {
//         *a=x;
//         a++;
//     }
//     for(int i =0;i<10;i++)
//     {
//         cout<<xumb[i];
//     }

// }

//test 67

// #include <iostream>
// using namespace std;

// void f1();

// int main()
// {
//     char str[]="sa- zangvac e main()";
//     cout<<str<<"\n";
//     f1();
//     cout<<str<<"\n";
//     return 0;
// }

// void f1()
// {
//     char str[80];
//     cout<<"Greq naxadasutyun";
//      cin>>str;
//     cout<<str<<"\n";
// }


//тест68
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     cout<<pow(3,5);
// }


//test 69

// #include <iostream>
// using namespace std;

// void f(int *j);

// int main(){
//     int i;
//     int *p;
//     p=&i;
//     f(p);
//     cout<<"I i arjeqy klini: "<<i;

//     return 0;
// }

// void f(int *j)
// {
//     *j = 100;
// }

//test70

// #include <iostream>
// using namespace std;

// void f(int *j);

// int main(){
//     int i;
//     f(&i);
//     cout<<"I i arjeqy klini: "<<i;

//     return 0;
// }

// void f(int *j)
// {
//     *j = 100;
// }


//test 71

// #include <iostream>
// using namespace std;

// void display(int num[10]);
// int main()
// {
//     int t[10],i;
//     for(i=0;i<10;i++)t[i] = i;
//     display(t);
//     return 0;
// }

// void display(int num[10])
// {
//     int i;
//     for(i=0;i<10;i++){
//         cout<<num[i]<<' ';
//     }
// }

//test 71.2

// #include <iostream>
// using namespace std;

// void display(int num[10]);
// int main()
// {
//     int t[10],i;
//     for(i=0;i<10;i++)t[i] = i;
//     display(t);
//     return 0;
// }

// void display(int num[])
// {
//     int i;
//     for(i=0;i<10;i++){
//         cout<<num[i]<<' ';
//     }
// }

//test 71.3

// #include <iostream>
// using namespace std;

// void display(int *num);
// int main()
// {
//     int t[10],i;
//     for(i=0;i<10;i++)t[i] = i;
//     display(t);
//     return 0;
// }

// void display(int *num)
// {
//     int i;
//     for(i=0;i<10;i++){
//         cout<<num[i]<<' ';
//     }
// }

//Test 72

// #include <iostream>
// using namespace std;

// void cube(int *n,int num);
// int main()
// {
//     int i,nums[10];
//     for(i=0;i<10;i++)nums[i]=i;
//     cout<<"Skzbnakan zangvaci mej: ";
//     for(i=0;i<10;i++)cout<<nums[i]<<" ";
//     cout<<'\n';

//     cube(nums,10);
//     for(i=0;i<10;i++)cout<<nums[i]<<" ";

//     return 0;
// }


// void cube(int *n, int num)
// {
//     while(num){
//         *n=*n**n**n;
//         num--;
//         n++;
//     }
// }

//test 73

// #include <iostream>
// #include <cstring>
// #include <cctype>
// using namespace std;

// void stringupper(char *str);

// int main()
// {
//     char str[80];
//     strcpy(str,"Im dury galisa C++");
//     stringupper(str);
//     cout<<str;

//     return 0;
// }

// void stringupper(char *str)
// {
//     while(*str){
//         *str=toupper(*str);
//         str++;
//     }
//}


//test 74

// #include <iostream>
// using namespace std;

// int mystrlen(char *str);
// int main()
// {
//     cout<<"Es naxadasutyan erkarutyuny havasa: ";
//     cout<<mystrlen("Es naxadasutyan erkarutyuny havasa: ");
//     return 0;
// }

// int mystrlen(char *str)
// {
//     int i;
//     for(i = 0;str[i];i++);

//     return i;
// }

//test 75

//#include <iostream>
//using namespace std;
//
//int main(int argc, char * argv[]) {
//    if (argc != 2) { 
//        cout << "no arguments!";
//        return 1;
//    }
//    else {
//        cout << "dzer anuny: " << argv[1];
//    }
//
//    return 0;
//}

//test 76

//#include <iostream>
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	int t, i;
//	for (t = 0; t < argc; ++t) {
//		i = 0;
//		while (argv[t][i]) {
//			cout << argv[t][i];
//			++i;
//		}
//
//		cout << " ";
//
//	}
//
//	return 0;
//}

//test 77

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	double a, b;
//	if (argc != 3) {
//		cout << "OGragorceq:learning_cpp tiv tiv.\n";
//		
//		return 1;
//	}
//	a = atof(argv[1]);
//	b = atof(argv[2]);
//
//	cout << a + b;
//	
//	return 0;
//
//}

//test 78

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int i;
//	long j;
//	double k;
//	i = atoi("100");
//	j = atol("10000000");
//	k = atof("-0.123");
//	cout << i << " " << j << " " << k;
//	return 0;
//}`


//test 79

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//	int i;
//	i = abs(-10);
//	cout << abs(-23);
//	return 0;
//}

//test 80

//#include <iostream>
//using namespace std;
//
//int find_substr(char *sub, char *str);
//int main()
//{
//	int index;
//	index = find_substr("aaa","afg");
//	cout << "indexy havasar e: " << index << "\n";
//
//	return 0;
//}
//
//int find_substr(char *sub, char *str)
//{
//	int t;
//	char* p, * p2;
//	for (t = 0; str[t];  t++) {
//		p = &str[t];
//		p2 = sub;
//		while (*p2 && *p == *p2) {
//			p++, p2++;
//		}
//		if (!*p2) return t;
//		
//	}
//
//	return -1;
//}


//test 81
//#include <iostream>
//using namespace std;
//
//void print_vertical(char* str);
//int main(int argc, char* argv[])
//{
//	if (argc == 2)print_vertical(argv[1]);
//
//	return 0;
//}
//
//void print_vertical(char* str)
//{
//	while (*str) {
//		cout << *str++ << '\n';
//	}
//}

//test 82

//#include <iostream>
//using namespace std;
//
//char* find_substring(char* sub, char* str);
//
//int main()
//{
//	char* substr;
//	substr = find_substring("ereq", "mek erku ereq chors");
//	cout << "gtvnac entanaxadasutyuny: " << substr;
//
//	return 0;
//}
//
//char* find_substr(char* sub, char* str)
//{
//	int t;
//	char* p, * p2, * start;
//	for (t = 0; str[t]; t++) {
//		p = &str[t];
//		start = p;
//		p2 = sub;
//		while (*p2 && *p2 == *p) {
//			p++; p2++;
//		}
//		if (!*p2) return start;
//	}
//	return 0;
//}

//test 82

//#include <iostream>
//using namespace std;
//
//void sqr_it(int* i);
//int main()
//{
//	int i = 10;
//	sqr_it(&i);
//
//	cout << i;
//}
//
//void sqr_it(int* i)
//{
//	*i = *i * *i;
//}

//test 83 factorial

//#include <iostream>
//using namespace std;
//
//int factr(int n);
//int fact(int n);
//int main()
//{
//	cout << "4i factorialy klini havasar: " << factr(4);
//	cout << '\n';
//
//	cout << "4i factorialy kilini havasar: " << fact(4);
//
//	return 0;
//}
//
//int factr(int n)
//{
//	int answer;
//	if (n == 1)return 1;
//	answer = factr(n - 1) * n;
//	return answer;
//}
//
//int fact(int n)
//{
//	int t, answer;
//
//	answer = 1;
//	for (t = 1; t <= n; t++) {
//		answer = answer * t;
//	}
//	return answer;
//}
//test 84
//#include <iostream>
//using namespace std;
//
//void reverse(char* s);
//
//int main()
//{
//	char str[] = "Sa text e";
//	reverse(str);
//
//	return 0;
//}
//
//void reverse(char* s)
//{
//	if (*s)reverse(s + 1);
//	else return;
//	cout << *s;
//}


//test 85

//#include <iostream>
//using namespace std;
//
//int sqr_it(int *x);
//
//int main()
//{
//	int t = 10;
//	cout << sqr_it(&t) << " " << t;
//
//	return 0;
//}
//
//int sqr_it(int* x)
//{
//	*x = *x * *x;
//	return *x;
//}


//test 86

//#include <iostream>
//using namespace std;
//
//void swap(int* x, int* y);
//
//int main()
//{
//	int x = 10; int y = 5;
//	swap(&x, &y);
//	cout << "x=" << x << " y=" << y;
//}
//
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}

//test 87

//#include <iostream>
//using namespace std;
//
//void f(int& i);
//int main()
//{
//	int val = 1;
//	cout << "Val i hin arjeqy: " << val << '\n';
//	f(val);
//	cout << "Val i taza arjeqy: " << val << '\n';
//
//	return 0;
//
//}
//
//void f(int& i)
//{
//	i = 10;
//	
//}

//test 88

//#include <iostream>
//using namespace std;
//
//void swap(int& a, int& b);
//
//int main()
//{
//	int a = 10, b = 20;
//	cout << "naxoroq arjeqnery klinen, A=" << a << " B=" << b;
//	swap(a, b);
//	cout << "arqenery klinen, A=" << a << " B=" << b;
//
//	return 0;
//}
//
//void swap(int& a, int& b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//TEST 89 PARZ TVERI ZANGVAC
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cout << "n= ";
//    cin >> n;
//    int* a = new int[n + 1];
//    for (int i = 0; i < n + 1; i++)
//        a[i] = i;
//    for (int p = 2; p < n + 1; p++)
//    {
//        if (a[p] != 0)
//        {
//            cout << a[p] << endl;
//            for (int j = p * p; j < n + 1; j += p)
//                a[j] = 0;
//        }
//    }
//    cin.get(); cin.get();
//}

//Test 90 veradardznuma silkeq;

//#include <iostream>
//using namespace std;
//
//double& f();
//double val = 100.0;
//
//int main()
//{
//	double newval;
//	cout << f() << '\n';
//	newval = f();
//	cout << newval << '\n';
//	f() = 99.1;
//	cout << f();
//
//	return 0;
//
//}
//
//double& f()
//{
//	return val;
//}

//test 91 

//#include <iostream>
//using namespace std;
//
//double& change_it(int i);
//double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};
//
//int main()
//{
//	int i;
//	cout << "skzbnakan arjeqy: ";
//	for (i = 0; i < 5; i++) {
//		cout << vals[i] << ' ';
//	}
//	cout << '\n';
//	change_it(1) = 5298.23;
//	change_it(3) = -98.8;
//	cout << "popoxvac arjeqnery: ";
//	for (i = 0; i < 5; i++) {
//		cout << vals[i] << ' ';
//	}
//
//	return 0;
//}
//
//
//double& change_it(int i)
//{
//	return vals[i];
//}

//test 92 anvtang zangvac
//
//#include <iostream>
//using namespace std;
//
//int& put(int i);
//int get(int i);
//int vals[10];
//int error = -1;
//
//int main()
//{
//	put(0) = 10;
//	put(1) = 20;
//	put(9) = 30;
//	cout << get(0) << ' ' << get(1) << " " << get(9);
//
//	put(12) = 1;
//
//	return 0;
//
//}
//
//int& put(int i)
//{
//	if (i >= 0 && i < 10) {
//		return vals[i];
//	}
//	else {
//		cout << "Gtnvela sxal ";
//		return error;
//	}
//}
//
//int get(int i)
//{
//	if (i >= 0 && i < 10) {
//		return vals[i];
//	}
//	else {
//		cout << "Gtnvela sxal";
//		return error;
//	}
//}

//test 93

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int j, k;
//	int& i = j;
//	j = 10;
//	cout << j << i;
//
//	k = 121;
//	i = k;
//	cout << j;
//}

//тест 94 funkciayi peregruzkeq

//#include <iostream>
//using namespace std;
//
//void f(int i);
//void f(int i, int j);
//void f(double k);
//
//int main()
//{
//	f(10);
//	f(10, 20);
//	f(12.23);
//
//	return 0;
//}
//
//void f(int i)
//{
//	cout << "f(int i) funkciayum i n havaser e: " << i << '\n';
//}
//
//void f(int i, int j)
//{
//	cout << "f(int,int) funkciayum in havasar e: " << i << '\n' << "j in havasar e: " << j << '\n';
//}
//void f(double k)
//{
//	cout << "f(double) um k i arjeqy: " << k;
//}
//


//test 95

//#include <iostream>
//using namespace std;
//
//int myabs(int i);
//double myabs(double i);
//long myabs(long i);
//
//int main()
//{
//	cout << myabs(-10) << '\n';
//	cout << myabs(-2.4) << '\n';
//	cout << myabs(-9L) << '\n';
//
//	return 0;
//}
//int myabs(int i)
//{
//	if (i < 0) return -i;
//	else return i;
//}
//
//long myabs(long i)
//{
//	if (i < 0) return -i;
//	else return i;
//}
//double myabs(double i)
//{
//	if (i < 0) return -i;
//	else return i;
//}


//test 96
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//void mystrcat(char* s1, char* s2, int len = -1);
//
//int main()
//{
//	char str1[80] = "sa text e";
//	char str2[80] = "0123456789";
//
//	mystrcat(str1, str2, 5);
//	cout << str1 << '\n';
//	strcpy_s(str1, "sa text e");
//	mystrcat(str1, str2);
//	cout << str1;
//	return 0;
//
//}
//
//void mystrcat(char* s1, char* s2, int len) {
//	while (*s1) s1++;
//	if (len == -1) len = strlen(s2);
//	while (*s2 && len) {
//		*s1 = *s2;
//		s1++; s2++; len--;
//	}
//	*s1 = '\0';
//}

///test 97	const

//#include <iostream>
//using namespace std;
//
//void code(const char* str);
//
//int main()
//{
//	code("Sa text e.");
//
//	return 0;
//}
//
//void code(const char* str)
//{
//	while (*str) {
//		cout << (char)(*str + 1);
//		str++;
//	}
//}

//test 98

//#include <iostream>
//using namespace std;
//
//int r_avg(int i);
//
//int main()
//{
//	int num;
//	do {
//		cout << "Greq tiv(-1 durs galu hamar): ";
//		cin >> num;
//		if (num != -1) {
//			cout << "mijin arjeqy klini: " << r_avg(num);
//			cout << '\n';
//		}
//	} while (num > -1);
//	return 0;
//}
//
//int r_avg(int i)
//{
//	static int sum = 0, count = 0;
//	sum = sum + i;
//	count++;
//	return sum / count;
//}


//test 99
//#include <iostream>
//#include "test.h"
//using namespace std;
//int r_avg(int i);
//void reset();
//
//int main()
//{
//	int num;
//	do {
//		cout << "greq tver(-1 durs galu hamar,-2 sbrosi hamar): ";
//		cin >> num;
//		if (num == -2) {
//			reset();
//			continue;
//		}
//		if (num != -1) {
//			cout << "mijin tivy havasar e: " << r_avg(num) << '\n';
//		}
//	} while (num != -1);
//
//	return 0;
//
//}
//


//test 100 register

//#include <iostream>
//using namespace std;
//
//int signed_pwr(int m, int e);
//
//int main() {
//	int x = signed_pwr(-2, 3);
//	cout << x;
//}
//
//int signed_pwr(register int m, register int e)
//{
//	register int temp;
//	int sign;
//	if (m < 0)sign = -1;
//	else sign = 1;
//
//	temp = 1;
//	for (; e; e--) temp = temp * m;
//
//	return temp * sign;
//}

//test 101 time

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//unsigned int i;
//unsigned int delay;
//
//int main()
//{
//	register unsigned int j;
//	long start, end;
//	start = clock();
//	for (delay = 0; delay < 50; delay++)
//		for (i = 0; i < 6400000; i++);
//	end = clock();
//	cout << "voch registr cikli hamar:";
//	cout << end - start << '\n';
//
//	start = clock();
//	for (delay = 0; delay < 50; delay++)
//		for (j = 0; j < 6400000; j++);
//	end = clock();
//	cout << "Registr cikli hamar: ";
//	cout << end - start << '\n';
//	
//	return 0;
//}

//test 102

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	enum apple { Jonathan, Golden_Del, Red_Del, Winesap, Cortland, McIntosh }red, yellow;
//	apple fruit;
//	fruit = Winesap;
//	switch (fruit) {
//	case Jonathan:cout << "Jonathan";
//		break;
//	case Golden_Del:cout << "Golden_Del";
//		break;
//	case Red_Del:cout << "Red_Del";
//		break;
//	case Winesap:cout << "Winesap";
//		break;
//	case Cortland:cout << "Cortland";
//		break;
//	case McIntosh:cout << "McIntosh";
//		break;
//	}
//}


//test 103
//
//#include <iostream>
//using namespace std;
//
//enum apple { Jonathan, Golden_Del, Red_Del, Winesap, Cortland, McIntosh };
//char name[][20] = {
//	"Jonathan",
//	"Golden_Del",
//	"Red_Del",
//	"Winesap",
//	"Cortland",
//	"McIntosh",
//};
//
//int main()
//{
//	apple fruit;
//	fruit = Jonathan;
//	cout << name[Jonathan] << "\n";
//	fruit = Winesap;
//	cout << name[Winesap] << "\n";
//}

//test 104 TYPEDEF
//
//#include <iostream>
//using namespace std;
//
//typedef int amboxj_tiv;
//
//int main()
//{
//	amboxj_tiv number = 15.3;
//	cout << number;
//}


//test 105

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	do {
//		cin >> ch;
//
//		ch = ch & 223;//223 i 2 akan dzevy --> 1101 1111 qani vor 6rdy 0 a menak et havasarvuma 0 i mnacacy mnuma nuyn dzev
//		cout << ch;
//	} while (ch != 'Q');
//
//	return 0;
//}

//test 106 TIVY DARDZNUMA 2akan hamakargov
//
//#include <iostream>
//using namespace std;
//
//void disp_binar(unsigned u);
//
//int main()
//{
//	disp_binar(4);
//}
//
//void disp_binar(unsigned u)
//{
//	register int t;
//	for (t = 128; t > 0; t = t / 2)
//		if (u & t) cout << "1";
//		else cout << "0";
//	cout << "\n";
//}

//test 107 MEcatary sarquma poqratar

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char ch;
//	do {
//		cin >> ch;
//		ch = ch | 32;
//		cout << ch;
//	} while (ch != 'q');
//	return 0;
//}

//test 108
//
//#include <iostream>
//using namespace std;
//
//void disp_binary(unsigned u);
//
//int main()
//{
//	unsigned u;
//	cout << "Greq 0ic 255 tiv: ";
//	cin >> u;
//	cout << "2akan hamakargum: ";
//	disp_binary(u);
//	cout << "Lracumy minchev 1: ";
//	disp_binary(~u);
//
//	return 0;
//}
//
//void disp_binary(unsigned u)
//{
//	register int t;
//	for (t = 128; t > 0; t = t / 2)
//		if (u & t)cout << "1";
//		else cout << "0";
//	cout << '\n';
//}


//test 109 >> <<
//#include <iostream>
//using namespace std;
//
//void disp_binary(unsigned u);
//
//int main()
//
//{
//	int i = 1, t;
//	for (t = 0; t < 8; t++) {
//		disp_binary(i);
//		i = i << 1;
//	}
//	cout << "\n";
//	for (t = 0; t < 8; t++) {
//		i = i >> 1;
//		disp_binary(i);
//	}
//
//	return 0;
//}
//
//
//void disp_binary(unsigned u)
//{
//	register int t;
//	for (t = 128; t > 0; t = t / 2)
//		if (u & t) cout << "1";
//		else cout << "0";
//	cout << "\n";
//}

//test 110  HARCAKAN NSHAN ?

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int x, count;
//	count = 10;
//	x = count > 0 ? 0 : 1;
//	cout << x;
//}

//test 111

//#include <iostream>
//using namespace std;
//
//int div_zero();
//
//int main()
//{
//	int i, j, result;
//	cout << "Greq bananarar u haytarary: ";
//	cin >> i >> j;
//	result = j ? i / j : div_zero();
//	cout << "Result: " << result;
//
//	return 0;
//}
//
//int div_zero()
//{
//	cout << "chi kareli bajanel 0 i: \n";
//
//	return 0;
//}

//test112 

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i, j;
//	j = 10;
//	i = (j++, j + 100, 999 + j);
//	cout << i;
//}


//test 113

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string b = "argiafiiajfc";
//	cout << sizeof(int) << '\n';
//	cout << sizeof(char) << '\n';
//	cout << sizeof(b);
//}


//test 114 New Delete

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p;
//	p = new int;//texenq tramadrum int i hamar;
//	*p = 20;
//	cout << *p;
//	delete p;
//	return 0;
//
//}

////test 114.2
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int* p;
//	p = new int(99);
//	cout << *p;
//	delete p;
//	
//	return 0;
//}

//test 115 zangvacner

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double* p = new double[10];
//	int i;
//	for (i = 0; i < 10; i++)p[i] = 100.00 + i;
//	for (i = 0; i < 10; i++) cout << p[i] << " ";
//	delete[]p;
//
//	return 0;
//}

//test 116 // Structurayov pahesti sarqum

//#include <iostream>
//#include <cstdio>
//#include <cctype>
//#include <string.h>
//#include <cstdlib>
//using namespace std;
//
//const int SIZE = 100;
//
//struct inv_type {
//	char item[40];//anuny apranqi
//	double cost;//arjeqy;
//	double retail;//vacharqi giny
//	int on_hand;//apranqi tivy
//	int lead_time;//qani ora mnacel apranq berelun
//}invtry[SIZE];//zangvac vori andamnery es strukturaica
//
//void init_list();
//int  menu();
//void enter();
//void input(int i);
//void update();
//void display();
//
//int main()
//{
//	char choice;
//	init_list();
//	for (;;) {
//		choice = menu();
//		switch (choice) {
//			case 'e':enter();
//				break;
//			case 'd':display();
//				break;
//			case 'u':update();
//				break;
//			case 'q':return 0;
//		}
//	}
//}
//
//void init_list()
//{
//	int t;
//	for (t = 0; t < SIZE; t++)*invtry[t].item = '\0';
//}
//
//int menu()
//{
//	char ch;
//	cout << '\n';
//	do {
//		cout << "(E)nter\n";
//		cout << "(D)isplay\n";
//		cout << "(U)pdate\n";
//		cout << "(Q)uit\n";
//		cout << "Yntreq hramany: ";
//		cin >> ch;
//	} while (!strchr("eduq", tolower(ch)));
//	return tolower(ch);
//}
//void enter()
//{
//	int i;
//	for (i = 0; i < SIZE; i++) {
//		if (!*invtry[i].item) break;
//	}
//	if (i == SIZE) {
//		cout << "Azat tex chka \n";
//		return;
//	}
//	input(i);
//
//}
//
//void input(int i)
//{
//	cout << "Apranqy: ";
//	cin >> invtry[i].item;
//	cout << "Arjeqy: ";
//	cin >> invtry[i].cost;
//	cout << "Vacharqi giny: ";
//	cin >> invtry[i].retail;
//	cout << "Qanaky: ";
//	cin >> invtry[i].on_hand;
//	cout << "Qani or het kstacvi apranq: ";
//	cin >> invtry[i].lead_time;
//}
//
//void update()
//{
//	int i;
//	char name[80];
//	cout << "Greq apranqi anuny: ";
//	cin >> name;
//	for (i = 0; i < SIZE; i++) {
//		if (!strcmp(name, invtry[i].item)) break;
//	}
//	if (i == SIZE) {
//		cout << "Apranqy chi gtnvel\n";
//		return;
//	}
//
//	cout << "Greq nor informacian\n";
//	input(i);
//}
//
//void display()
//{
//	int t;
//	for (t = 0; t < SIZE; t++) {
//		if (*invtry[t].item) {
//			cout << invtry[t].item << '\n';
//			cout << "Arjeqy: $" << invtry[t].cost << '\n';
//			cout << "Vacharqi giny: $" << invtry[t].retail << '\n';
//			cout << "Arka e: " << invtry[t].on_hand << '\n';
//			cout << "Qani oric khamalrvi: " << invtry[t].lead_time << "\n\n";
//
//		}
//	}
//}

//test 117 funkciain talisenq strutura vorpes argument

//#include <iostream>
//using namespace std;
//
//struct sample {
//	int a;
//	char ch;
//};
//void f1(sample parm);
//
//int main()
//{
//	sample arg;
//	arg.a = 1000;
//	arg.ch = 'x';
//	f1(arg);
//
//	return 0;
//}
//
//void f1(sample parm)
//{
//	cout << parm.a << " " << parm.ch << "\n";
//}

//test 118 structurai meki arjeqy myusinenq talis

//#include <iostream>
//using namespace std;
//
//struct stype {
//	int a, b;
//};
//
//int main()
//{
//	stype svar1, svar2;
//	svar1.a = svar1.b = 10;
//	svar2.a = svar2.b = 20;
//	cout << "Structuranery minchev gorcoxutyuny.\n ";
//	cout << "Svar1: " << svar1.a << " " << svar1.b << "\n";
//	cout << "Svar2: " << svar2.a << " " << svar2.b << "\n\n";
//
//	svar2 = svar1;
//	cout << "Structuranery gorcoxutyuneric heto.\n ";
//	cout << "Svar1: " << svar1.a << " " << svar1.b << "\n";
//	cout << "Svar2: " << svar2.a << " " << svar2.b << "\n\n";
//}

//test 119 structuraner u ukazatelner
//
//#include <iostream>
//using namespace std;
//
//struct bal {
//	float balance;
//	char name[80];
//}person;
//
//int main()
//{
//	bal* p;
//	p = &person;
//	p->balance = 10.0;
//	cout << p->balance;
//}

//test 120

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	struct tm* ptr;
//	time_t lt;
//	lt = time('\0');
//	ptr = localtime(&lt);
//	cout << asctime(ptr);
//}

//test 121
//
//#include <iostream>
//using namespace std;
//
//struct mystruct {
//	int a;
//	int b;
//
//};
//
//mystruct& f(mystruct& var);
//
//int main()
//{
//	mystruct x, y;
//	x.a = 10;
//	x.b = 20;
//	cout << "skzbnakan x.a u x.b: " << x.a << ' ' << x.b << "\n";
//	y = f(x);
//	cout << "Popoxvac x.a u x.b n \n";
//	cout << x.a << ' ' << x.b << '\n';
//	cout << "Popoxvac y.a u y.b n \n";
//	cout << y.a << ' ' << y.b;
//	return 0;
//}
//
//mystruct& f(mystruct& var)
//{
//	var.a = var.a * var.a;
//	var.b = var.b / var.b;
//	return var;
//}
//
//#include <iostream>
//using namespace std;
//
//struct stype {
//	int nums[10][10];
//	float b;
//}var;
//
//struct addr {
//	char name[40];
//	char street[40];
//	char city[40];
//	int zip;
//};
//struct emp {
//	addr address;
//	float wage;
//}worker;
//
//int main()
//{
//	worker.address.zip = 20341;
//}

//test 122
//
//#include <iostream>
//using namespace std;
//
//struct mystruct {
//	int a;
//	char str[80];
//
//	mystruct* sptr;
//};
//
//struct status_type {
//	//bolorin tramadruma 1 bit
//	unsigned delta_cts : 1;
//	unsigned delta_dsr : 1;
//	unsigned tr_edge : 1;
//	unsigned delta_rec : 1;
//	unsigned cts : 1;
//	unsigned dsr : 1;
//	unsigned ring : 1;
//	unsigned rec_line : 1;
//}status;
//
//int main()
//{
//	
//}

//test 123 miacutyunener  union

//#include <iostream>
//using namespace std;
//
//union utype {
//	short int i;
//	char ch;
//};
//void fund(utype* un);
//
//int main()
//{
//	utype u_var;
//	fund(&u_var);
//	u_var.ch = 'A';
//	cout << u_var.ch;
//
//}
//
//void fund(utype* un) {
//	un->i = 10;
//}
//

//test 124 union

//#include <iostream>
//using namespace std;
//
//void disp_binary(unsigned u);
//union swap_bytes {
//	short int num;
//	char ch[2];
//};
//
//int main()
//{
//	swap_bytes sb;
//	char temp;
//	sb.num = 15;
//	cout << "Skzbnakan baytery: ";
//	disp_binary(sb.ch[0]);
//	cout << " ";
//	disp_binary(sb.ch[1]);
//	cout << "\n\n";
//	
//	temp = sb.ch[0];
//	sb.ch[0] = sb.ch[1];
//	sb.ch[1] = temp;
//
//	cout << "Popoxvac baytery: ";
//	disp_binary(sb.ch[0]);
//	cout << " ";
//	disp_binary(sb.ch[1]);
//	cout << "\n\n";
//
//	return 0;
//}
//
//void disp_binary(unsigned u)
//{
//	register int t;
//	for (t = 128; t > 0; t /= 2) {
//		if (u & t) cout << "1";
//		else cout << "0";
//	}
//}

//test 125

//#include <iostream>
//
//using namespace std;
//
//struct byte {
//	unsigned a : 1;
//	unsigned b : 1;
//	unsigned c : 1;
//	unsigned d : 1;
//	unsigned e : 1;
//	unsigned f : 1;
//	unsigned g : 1;
//	unsigned h : 1;
//};
//
//union bits {
//	char ch;
//	struct byte bit;
//}ascii;
//
//void disp_bits(bits b);
//
//int main()
//{
//	do {
//		cin >> ascii.ch;
//		cout << ":";
//		disp_bits(ascii);
//
//	} while (ascii.ch != 'q');
//	
//	return 0;
//}
//
//void disp_bits(bits b) {
//	if (b.bit.h) cout << "1";
//	else cout << "0";
//	if (b.bit.g) cout << "1";
//	else cout << "0";
//	if (b.bit.f) cout << "1";
//	else cout << "0";
//	if (b.bit.e) cout << "1";
//	else cout << "0";
//	if (b.bit.d) cout << "1";
//	else cout << "0";
//	if (b.bit.c) cout << "1";
//	else cout << "0";
//	if (b.bit.b) cout << "1";
//	else cout << "0";
//	if (b.bit.a) cout << "1";
//	else cout << "0";
//
//	cout << "\n";
//
//}

//test 126 anonim miacutyunner

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	union {
//		short int count;
//		char ch[2];
//	};
//
//	ch[0] = 'X';
//	ch[1] = 'Y';
//	cout << "Miacutyunnery sinvoli tesqov: " << ch[0] << ch[1] << '\n';
//	cout << "Miacutyunnery int i tesqov: " << count << '\n';
//
//	return 0;
//}

//test 127 CLASS (OOP)
//#include <iostream>
//using namespace std;
//
//class queue {
//	int q[100];
//	int sloc, rloc;
//public:
//	void init();
//	void qput(int i);
//	int qget();
//};
//
//void queue::init()
//{
//	rloc = sloc = 0;
//}
//
//void queue::qput(int i)
//{
//	if (sloc == 100) {
//		cout << "Herty lriv e.\n";
//		return;
//	}
//	sloc++;
//	q[sloc] = i;
//}
//
//int queue::qget()
//{
//	if (rloc == sloc) {
//		cout << "Herty datark e,\n";
//		return 0;
//	}
//	rloc++;
//	return q[rloc];
//}
//
//int main()
//{
//	queue a, b;
//	a.init();
//	b.init();
//
//	a.qput(10);
//	b.qput(19);
//
//	a.qput(20);
//	b.qput(1);
//
//	cout << "a-i parunakutyuny: ";
//	cout << a.qget() << " ";
//	cout << a.qget() << "\n";
//
//	cout << "b-i parunakutyuny: ";
//	cout << b.qget() << " ";
//	cout << b.qget() << "\n";
//
//	return 0;
//	
//}

//test 128 Class

//#include <iostream>
//using namespace std;
//
//
//class myclass {
//	int a; //pak tvyalner
//public:   //bac tvyalner stexic nerqev
//	int b;
//	void setab(int i); 
//	int geta();
//	void reset();
//};
//
//void myclass :: setab(int i)
//{
//	a = i;
//	b = i * i;
//}
//
//int myclass::geta()
//{
//	return a;
//}
//
//void myclass::reset()
//{
//	setab(0);
//}
//
//int main()
//{
//	myclass object;
//	object.setab(5);
//	cout << "Veradarcnuma ab funkcian kancheluc heto: ";
//	cout << object.b << "\n";
//	cout << object.geta() << "\n";
//	object.reset();
//	cout << object.b << "\n";
//	cout << object.geta() << "\n";
//
//}

//Test 129

//#include <iostream>
//using namespace std;
//
//class queue {
//	int q[100];
//	int sloc, rloc;
//public:
//	queue();//konstructor
//	~queue();//dekonstruktor
//	void qput(int i);
//	int qget();
//};
//
//queue::queue()
//{
//	sloc = rloc = 0;
//	cout << "Inicalizacvac e.\n";
//}
//
//queue::~queue()
//{
//	cout << "Herty qandvac e.\n ";
//}
//
//int main()
//{
//	queue q1;
//}


//test 130 Verjnakan queue

//#include <iostream>
//using namespace std;
//
//class queue {
//	int q[100];
//	int sloc, rloc;
//public:
//	queue();//konstruktor
//	~queue();//dekonstruktor
//	void qput(int i);
//	int qget();
//};
//
//queue::queue()
//{
//	sloc = rloc = 0;
//	cout << "Herty sarqvac e.\n";
//}
//
//queue::~queue()
//{
//	cout << "Herty qandvac e.\n";
//}
//
//void queue::qput(int i)
//{
//	if (sloc == 100) {
//		cout << "Hertum tex chka.\n";
//		return;
//	}
//	sloc++;
//	q[sloc] = i;
//}
//
//int queue::qget()
//{
//	if (rloc == sloc) {
//		cout << "Herty datark e.\n";
//		return 0;
//	}
//	rloc++;
//	return q[rloc];
//}
//
//int main()
//{
//	queue a, b;
//	a.qput(10);
//	b.qput(19);
//
//	a.qput(20);
//	b.qput(1);
//
//	cout << a.qget() << " ";
//	cout << a.qget() << "\n";
//	cout << b.qget() << " ";
//	cout << b.qget() << "\n";
//	
//	return 0;
//}
//

//test 131

//#include <iostream>
//using namespace std;
//
//class queue {
//	int q[100];
//	int sloc, rloc;
//	int who;
//public:
//	queue(int id);//konstruktor
//	~queue();//dekonstruktor
//	void qput(int i);
//	int qget();
//};
//
//queue::queue(int id)
//{
//	who = id;
//	sloc = rloc = 0;
//	cout << who << "Herty sarqvac e.\n";
//}
//
//queue::~queue()
//{
//	cout << who << "Herty qandvac e.\n";
//}
//
//void queue::qput(int i)
//{
//	if (sloc == 100) {
//		cout << "Hertum tex chka.\n";
//		return;
//	}
//	sloc++;
//	q[sloc] = i;
//}
//
//int queue::qget()
//{
//	if (rloc == sloc) {
//		cout << "Herty datark e.\n";
//		return 0;
//	}
//	rloc++;
//	return q[rloc];
//}
//
//int main()
//{
//	queue a = queue(101);
//	queue b = queue(102);
//	a.qput(10);
//	b.qput(19);
//
//	a.qput(20);
//	b.qput(1);
//
//	cout << a.qget() << " ";
//	cout << a.qget() << "\n";
//	cout << b.qget() << " ";
//	cout << b.qget() << "\n";
//
//	return 0;
//}
//

//132

//#include <iostream>
//using namespace std;
//
//class widget {
//	int i;
//	int j;
//public:
//	widget(int a, int b);
//	void put_widget();
//	~widget();
//};
//
//widget::widget(int a, int b)
//{
//	i = a;
//	j = b;
//}
//
//void widget::put_widget()
//{
//	cout << i << " " << j << "\n";
//}
//widget::~widget()
//{
//	cout << "Objecty pakvac e\n";
//}
//
//int main()
//{
//	widget x(10, 20), y(0, 0);
//	x.put_widget();
//	y.put_widget();
//	return 0;
//}

//133

//#include <iostream>
//using namespace std;
//
//class myclass{
//	int a;
//public:
//	myclass(int x);
//	int get_a();
//};
//
//myclass::myclass(int x)
//{
//	a = x;
//}
//int myclass::get_a()
//{
//	return a;
//}
//
//int main()
//{
//	myclass ob = 4;//kancuma funkcia myclass(4)
//	cout << ob.get_a();
//	return 0;
//}

//134 classner u structuraner

//#include <iostream>
//using namespace std;
//
//struct cl {
//	int get_i();//sa public a
//	void put_i(int j);
//private:
//	int i;
//};
//int cl::get_i()
//{
//	return i;
//}
//void cl::put_i(int j)
//{
//	i = j;
//}
//
//int main()
//{
//	cl s;
//	s.put_i(10);
//	cout << s.get_i();
//}

//134.2 structurai texy class a ogtagorcvum

//#include <iostream>
//using namespace std;
//
//class cl {
//	int i;
//public:
//	int get_i();
//	void put_i(int j);
//};
//int cl::get_i()
//{
//	return i;
//}
//void cl::put_i(int j)
//{
//	i = j;
//}
//
//int main()
//{
//	cl s;
//	s.put_i(10);
//	cout << s.get_i();
//}


//135 Union and class
//
//#include <iostream>
//using namespace std;
//
//union u_type {
//	u_type(short int a);//bac andamner
//	void showchars();
//	short int i;
//	char ch[4];
//};
//
//u_type::u_type(short int a)
//{
//	i = a;
//}
//void u_type::showchars()
//{
//	cout << ch[0] << " ";
//	cout << ch[1] << "\n";
//}
//
//int main()
//{
//	u_type u(11415);
//	u.showchars();
//	return 0;
//}

//136

//#include <iostream>
//using namespace std;
//
//class cl {
//	int i;//privat a skzbic
//public:
//	int get_i();
//	void put_i(int j);
//};
//
//inline int cl::get_i()
//{
//	return i;
//}
//
//inline void cl::put_i(int j)
//{
//	i = j;
//}
//
//int main()
//{
//	cl s;
//	s.put_i(10);
//	cout << s.get_i();
//	return 0;
//}

//136.2
//#include <iostream>
//using namespace std;
//
//class cl {
//	int i;//privat a skzbic
//public:
//	int get_i() { return i; }
//	void put_i(int j) { i = j; }
//};
//
//
//int main()
//{
//	cl s;
//	s.put_i(10);
//	cout << s.get_i();
//	return 0;
//}

//137

//#include <iostream>
//using namespace std;
//
//enum resolution{low, medium,high};
//
//class display {
//	int width;
//	int height;
//	resolution res;
//public:
//	void set_dim(int w, int h) { width = w; height = h; }
//	void get_dim(int& w, int& h) { w = width, h = height; }
//	void set_res(resolution r) { res = r; }
//	resolution get_res() { return res; }
//};
//
//char names[3][8] = {
//	"cacr",
//	"mijin",
//	"bardzr",
//};
//
//int main()
//{
//	display display_mode[3];
//	int i, w, h;
//	display_mode[0].set_res(low);
//	display_mode[0].set_dim(640, 480);
//
//	display_mode[1].set_res(medium);
//	display_mode[1].set_dim(800, 600);
//
//	display_mode[2].set_res(high);
//	display_mode[2].set_dim(1600, 1200);
//
//	cout << "Hnaravor dzevery tvyalnery artacelu: \n\n";
//	for (i = 0; i < 3; i++) {
//		cout << names[display_mode[i].get_res()] << ".";
//		display_mode[i].get_dim(w, h);
//		cout << w << "x" << h << "\n";
//	}
//	return 0;
//}

//138

//#include <iostream>
//using namespace std;
//
//class samp {
//	int a;
//public:
//	samp(int n) { a = n; }
//	int get_a() { return a; }
//};
//
//int main()
//{
//	samp sampArray[4] = { -1,-2,-3,-4 };
//	int i;
//	for (i = 0; i < 4; i++) {
//		cout << sampArray[i].get_a() << " ";
//	}	
//	cout << "\n";
//	return 0;
//}

//139

//#include <iostream>
//using namespace std;
//
//class samp {
//	int a, b;
//public:
//	samp(int n, int m) { a = n, b = m; }
//	int get_a(){ return a; }
//	int get_b(){ return b; }
//};
//
//int main()
//{
//	samp sampArray[4][2] = {
//		samp(1,2),
//		samp(3,4),
//		samp(5,6),
//		samp(7,9),
//		samp(9,10),
//		samp(11,12),
//		samp(13,14),
//		samp(15,16)
//	};
//	int i;
//	for (i = 0; i < 4; i++) {
//		cout << sampArray[i][0].get_a() << " ";
//		cout << sampArray[i][0].get_b() << "\n";
//		cout << sampArray[i][1].get_a() << " ";
//		cout << sampArray[i][1].get_b() << "\n";
//	}
//	cout << "\n";
//}

//140 ukazatel objectneri

//#include <iostream>
//using namespace std;
//
//class P_example {
//	int num;
//public:
//	void set_num(int val) { num = val; }
//	void show_num();
//};
//void P_example::show_num()
//{
//	cout << num << "\n";
//}
//
//int main()
//{
//	P_example ob, * p;//ob - object *p pointer to P_example class
//	ob.set_num(1);
//	ob.show_num();
//	p = &ob;
//	p->show_num();
//
//	return 0;
//}

//141 ukazatel u object

//#include <iostream>
//using namespace std;
//
//class P_example {
//	int num;
//public:
//	void set_num(int val) { num = val; }
//	void show_num() { cout << num << "\n"; }
//};
//
//int main()
//{
//	P_example ob[2], * p;
//	ob[0].set_num(10);
//	ob[1].set_num(20);
//
//	p = &ob[0];
//	p->show_num();
//	p++;//ob[1]
//	p->show_num();
//	p--;//ob[0]
//	p->show_num();
//
//	return 0;
//}


//142 friend funkcianer  class um

//#include <iostream>
//using namespace std;
//
//class myclass {
//	int a, b;
//public:
//	myclass(int i, int j) { a = i, b = j; }
//	friend int sum(myclass x);
//};
//
//int sum(myclass x)
//{
//	return x.a + x.b;
//}
//
//int main()
//{
//	myclass n(3, 4);
//	cout << sum(n);
//	return 0;
//}

//143 friend func 

//#include <iostream>
//using namespace std;
//
//const int IDLE = 0;
//const int INUSE = 1;
//
//class C2;//opredelyayushiy
//
//class C1 {
//	int status;//idle ete aktiv chi inuse ete aktiva
//public:
//	void set_status(int state);
//	friend int idle(C1 a, C2 b);
//};
//
//class C2 {
//	int status;
//public:
//	void set_status(int state);
//	friend int idle(C1 a, C2 b);
//};
//
//void C1::set_status(int state)
//{
//	status = state;
//}
//
//void C2::set_status(int state)
//{
//	status = state;
//}
//
//int idle(C1 a, C2 b)
//{
//	if (a.status || b.status) return 0;
//	else return 1;
//}
//
//int main()
//{
//	C1 x;
//	C2 y;
//	x.set_status(IDLE);
//	y.set_status(IDLE);
//	if (idle(x, y)) cout << "Azat e.\n";
//	else cout << "Sms ka ekranin.\n";
//
//	x.set_status(INUSE);
//	if (idle(x, y)) cout << "Azat e.\n";
//	else cout << "Sms ka ekranin.\n";
//	
//	return 0;
//}

//143.2

//#include <iostream>
//using namespace std;
//
//const int IDLE = 0;
//const int INUSE = 1;
//
//class C2;//haytararumenq
//
//class C1 {
//	int status;
//public:
//	void set_status(int state) { status = state; }
//	int idle(C2 b);//c1 class i andam e
//};
//
//class C2 {
//	int status;
//public:
//	void set_status(int state) { status = state; }
//	friend int C1::idle(C2 b);
//};
//
//int C1::idle(C2 b)
//{
//	if (status || b.status) return 0;
//	else return 1;
//}
//
//int main()
//{
//	C1 x;
//	C2 y;
//
//	x.set_status(IDLE);
//	y.set_status(IDLE);
//	
//	if (x.idle(y)) cout << "Ekrany azat e.\n";
//	else cout << "Ekrany zbaxvac e.\n";
//	x.set_status(INUSE);
//	if (x.idle(y)) cout << "Ekrany azat e.\n";
//	else cout << "Ekrany zbaxvac e.\n";
//
//}

//144 peregruzka funkciayi clasi mej

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class timer {
//	int seconds;
//public:
//	timer(char* t) { seconds = atoi(t); }//ete tvaca string ov
//	timer(int t) { seconds = t; }//ete tvaca int ov
//	timer(int min, int sec) { seconds = min * 60 + sec; }//ete tvaca ropeov u varkyanov
//	void run();
//};
//void timer::run()
//{
//	clock_t t1;
//	t1 = clock();
//	while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds);
//	cout << "\a";
//}
//
//int main()
//{
//	timer a(3), b('4'), c(0, 10);
//	a.run();
//	c.run();
//	b.run();
//}

///145 popoxakani haytararum
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = strlen(str);
//	double arc = sin(theta);
//	float d = 1, 02 * cont / deltax;
//
//}

//146 timer.2
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class timer {
//	int seconds;
//public:
//	timer(char* t) { seconds = atoi(t); }
//	timer(int t) { seconds = t; }
//	timer(int min, int sec) { seconds = min * 60 + sec; }
//	void run();
//};
//
//void timer::run()
//{
//	clock_t t1;
//	t1 = clock();
//	while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds);
//	cout << '\a';
//}
//
//int main()
//{
//	timer a(1);
//	a.run();
//	cout << "Greq varkyanneri qanaky: ";
//	char str[80];
//	cin >> str;
//	timer b(str);
//	b.run();
//	cout << "Greq ropenery ev varkyannery: ";
//	int min, sec;
//	cin >> min >> sec;
//	timer c(min, sec);
//	c.run();
//}

//147 mi objecty myusin taly

//#include <iostream>
//using namespace std;
//
//class myclass {
//	int a, b;
//public:
//	void setab(int x, int y) { a = x, b = y; }
//	void showab() { cout << "a= " << a << " b=" << b << "\n"; }
//};
//
//int main()
//{
//	myclass ob1, ob2;
//	ob1.setab(10, 20);
//	ob2.setab(0, 0);
//	cout << "Ob1 y minchev: ";
//	ob1.showab();
//	cout << "Ob2 y minchev: ";
//	ob2.showab();
//
//	cout << "\n\n";
//	ob2 = ob1;
//	cout << "Ob1 y heto: ";
//	ob1.showab();
//	cout << "Ob2 y heto: ";
//	ob2.showab();
//}

//148objectneri taly funkcianerin


//#include <iostream>
//using namespace std;
//
//class OBJ {
//	int i;
//public:
//	void set_i(int x) { i = x; }
//	void out_i() { cout << i << " "; }
//
//};
//void f(OBJ x)
//{
//	x.out_i();
//	x.set_i(100);
//	x.out_i();
//}
//
//int main()
//{
//	OBJ ob1;
//	ob1.set_i(10);
//	f(ob1);
//	ob1.out_i();
//}

//149 konstruktorner dekostruktorner eb informaciayi texapoxum

//#include <iostream>
//using namespace std;
//
//class myclass {
//	int val;
//public:
//	myclass(int i) { val = i; cout << "Stexcum.\n"; }
//	~myclass() { cout << "Qandvac e.\n"; }
//	int getval() { return val; }
//};
//
//void display(myclass ob)
//{
//	cout << ob.getval() << "\n";
//}
//
//int main()
//{
//	myclass a(10);
//	display(a);
//	return 0;
//}

//150
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//class myclass {
//	int* p;
//public:
//	myclass(int i);
//	~myclass();
//	int getval() { return *p; }
//};
//myclass::myclass(int i)
//{
//	cout << "Hishoxutyun tramadreq:";
//	p = new int;
//	*p = i;
//}
//myclass::~myclass()
//{
//	cout << "Hishoxutyan azatum:";
//	delete p;
//}
//void display(myclass& ob)
//{
//	cout << ob.getval() << "\n";
//}
//
//int main()
//{
//	myclass a(10);
//	display(a);
//	return 0;
//}

//151

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class sample {
//	char s[80];
//public:
//	void show() { cout << s << "\n"; }
//	void set(char* str) { strcpy_s(s, str); }
//};
//
//sample input()
//{
//	char instr[80];
//	sample str;
//	cout << "Greq naxadasutyun:";
//	cin >> instr;
//	str.set(instr);
//	return str;
//}
//
//int main()
//{
//	sample ob;
//	ob = input();
//	ob.show();
//	return 0;
//}


//jamanakov test

