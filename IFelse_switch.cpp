                                /* if else easy questions */
    /* question 1:- take two input from user and print the bigger number   */

 #include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    if(a>b){
        cout<<"the bigger number is"<<a;
    }
    else{
        cout<<"the bigger number is "<<b;
    }
}
 







/* question 3:- find the greatest b/w in three numbers */

/* #include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers a,b and c";
    cin>>a>>b>>c;
if(a>b&&a>c)
{
    cout<<a<<"is greatest";
}
else if (b>a&&b>c)
{
    cout<<b<<"is the greatest";
}
else{
    cout<<c<<"is the greatest";
}
} */




/* question 3:-C program to check whether a number is positive, negative or zero */

/* #include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n>0){
        cout<<"the number is +ve";
    }
    else if(n<0){
        cout<<"the number is -ve";
    }
    else{
        cout<<"the number is 0";
    }
} */


/* question4:-Write a C program to check whether a number is divisible by 5 and 11 or not */

 /*   #include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n%5==0 && n%11==0){
        cout<<"the number is divisible by 5 and 11";
    }
else{
    cout<<"not divisible by 5 and 11 ";
}
}   
 */



/* question5-C program check whether a number is even or odd */
 /*  #include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n%2==0){
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }
}  */




/* question6-check leap year */
/*  #include<iostream>
using namespace std;
main()
{
    int y;
    cout<<"enter the year ";
    cin>>y;
    if (y%4==0 && y%100!=0 || y%400==0){
        cout<<"the year is leap";
    }
    else{
        cout<<"the year is not leap";
    }
}     */ 



/* question 7-to check the input is alphabate or not */
/* #include<iostream>
using namespace std;
main()
{
    int c;
    cout<<"enter the character ";
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"the character u entered is alphabet";
    }
    else{
        cout<<"not alphabet";
    }
} */





/*question 8-Write a C program to input any alphabet and check whether it is vowel or consonant.  */
/* #include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' || 
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            cout<<"The character you entered is a vowel.";
        } else {
            cout<<"The character you entered is a consonant.";
        }
    } else {
        cout<<"Not a valid alphabet.";
    }

    return 0;
} */





/* question 9:-Write a C program to input any character and check whether it is alphabet, digit or special character. */
/* #include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout<<"the character is alpha";
    }
    else if(c>='0' && c<='9'){
        cout<<" character is number";
    }
    else{
        cout<<"must be a special charcter";
    }
}     */





/* question10- enter the week day number and find the week-day */
/* #include<iostream>
using namespace std;
main(){
    int w;
    cout<<"enter the week day number b/w 1-7";
    cin>>w;
    if(w==1){
        cout<<"monday";
    }
    else if(w==2){
        cout<<"tuesday";
    }
    else if(w==3){
        cout<<"wed";
    }
    else if(w==4){
        cout<<"thur";
    }
    else if(w==5){
        cout<<"fri";
    }
    else if(w==6){
        cout<<"saturday";
    }
    else if(w==7){
        cout<<"sunday";
    }
    else{
        cout<<"invalid entery";
    }
}
 */

                                           /*same question using switch case */
/* #include<iostream>
using namespace std;
main(){
    int d;
    cout<<"enter the week day number";
    cin>>d;
    switch(d){
        case 1:
        cout<<"mon";
        break;
        case 2:
        cout<<"tue";
        break;
        case 3:
        cout<<"wed";
        break;
        case 4:
        cout<<"thur";
        break;
        case 5:
        cout<<"fri";
        break;
        case 6:
        cout<<"sat";
        break;
        case 7:
        cout<<"sun";
        break;
        default:
        cout<<"pls enter the valid number (1-7)";
    }
} */




/* question 11- Write a C++ program to input month number and print number of days in that month. */
/* #include<iostream>
using namespace std;
main(){
    int m;
    cout<<"enter the month number";
    cin>>m;
    switch(m){
        case 1:
        cout<<"jan"<<"31 days";
        break;
        case 2:
        cout<<"feb"<<"29 days";
        break;
        case 3:
        cout<<"march"<<"31 days";
        break;
        case 4:
        cout<<"apr"<<"30 days";
        break;
        case 5:
        cout<<"may"<<"31 days";
        break;
        case 6:
        cout<<"june"<<"30 days";
        break;
        case 7:
        cout<<"jul"<<"31 days";
        break;
        case 8:
        cout<<"aug"<<"31 days";
        break;
        case 9:
        cout<<"sep"<<"30 days";
        break;
        case 10:
        cout<<"oct"<<"31 days";
        break;
        case 11:
        cout<<"nov"<<"30 days";
        break;
        case 12:
        cout<<"dec"<<"31 days";
        break;
        default:
        cout<<"pls enter bw 1-12";
        break;
    }
}
 */


                                    /* quesion 12-counting notes in a given ammount  */


/* #include<iostream>
using namespace std;
main(){
    int amt,N500,N200,N100,N50,N20,N10,N5,N2,N1;
    N500=N200=N100=N50=N20=N10=N5=N2=N1=0;
    cout<<"enter the ammount";
    cin>>amt;
    if(amt>=500){
        N500=amt/500; 
        amt=amt-(N500*500);
    }
    cout<<"500 ke -"<<N500<<"notes "<<endl;
    if(amt>=200){
        N200=amt/200; 
        amt=amt-(N200*200);
    }
    cout<<"200 ke -"<<N200<<"notes "<<endl;
    if(amt>=100){
        N100=amt/100; 
        amt=amt-(N100*100);
    }
    cout<<"100 ke -"<<N100<<"notes "<<endl;
    if(amt>=50){
        N50=amt/50; 
        amt=amt-(N50*50);
    }
    cout<<"50 ke -"<<N50<<"notes "<<endl;
    if(amt>=20){
        N20=amt/20; 
        amt=amt-(N20*20);
    }
    cout<<"20 ke -"<<N20<<"notes "<<endl;
    if(amt>=10){
        N10=amt/10; 
        amt=amt-(N10*10);
    }
    cout<<"10 ke -"<<N10<<"notes "<<endl;
    if(amt>=5){
        N5=amt/5; 
        amt=amt-(N5*5);
    }
    cout<<"5 ke -"<<N5<<"notes "<<endl;
    if(amt>=2){
        N2=amt/2; 
        amt=amt-(N2*2);
    }
    cout<<"2 ke -"<<N2<<"notes "<<endl;
    if(amt>=1){
        N1=amt/1; 
        amt=amt-(N1*1);
    }
    cout<<"1 ke -"<<N1<<"notes "<<endl;
 }
 */ 


             /*question 13- check if its triangle or not */
/* #include<iostream>
using namespace std;
main(){
    int a,b,c;
    int x,y,z;
    cout<<"enter the angles a,b and c of triangle";
    cin>>a>>b>>c;

    if(a+b+c==180){
        cout<<"the triangle is possible"<<endl;
        cout<<"enter the sides of the triangle";
        cin>>x>>y>>z;
        if(x+y>z && y+z>x && x+z>y){
            cout<<"triagle possible";
        }
        else{
            cout<<"the triangle by the side can't be possible";
        }
    }
    else{
        cout<<"triangle not possible";
    }
}
 */


                      /*question 14-check prime number  */
/* #include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number";
        }
        else{
            cout<<"prime"<<endl;
        }
    }
} */






























                                                       /*LOOPS IN C++ */
                                                       /* while loop */
/* #include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n<10){
    while(n<=10){
        cout<<n<<endl;
        n++;
    }
    }
    else{
        cout<<"invalid number";
    }
} */


                                               /*

                                               *
                                               **
                                               ***
                                               ****
                                               *****
                                               
                                                 */
/*  #include<iostream>
using namespace std;
main(){
    
     int size=5;
     for(int r=1;r<=size;r++)
    {
        for(int c=1;c<=r;c++){
            cout<<"*";
        }
        cout<<endl;
        }  */


                                               /*


                                               *****
                                               ****
                                               ***
                                               **
                                               *
                                               
                                               
                                                 */



/* for(int r=1;r<=size;r++){
    for(int c=5;c>=r;c--){
        cout<<"*";
    }
    cout<<endl;
    } */






