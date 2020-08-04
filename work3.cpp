#include <iostream>
using namespace std;
int main()
{
    float first,second,third,mid_term,final,quizz_total,total;
    cout<<"============QUIZZES============\n";
    cout<<"Enter first quizz(10) :";
    cin>>first;
    cout<<"Enter second quizz(10):";
    cin>>second;
    cout<<"Enter third quizz(10) :";
    cin>>third;
    cout<<"============Midterm============\n";
    cout<<"Enter Mid-term(40) :";
    cin>>mid_term;
    cout<<"============Final============\n";
    cout<<"Enter Final(50)";
    cin>>final;
    quizz_total=(first+second+third)/3;
    cout<<"quizz Total :"<<quizz_total<<endl;
    cout<<"Mid term :"<<mid_term<<endl;
    cout<<"final :"<<final<<endl;
    total=quizz_total+mid_term+final;
    cout<<"Total :"<<total<<endl;
    cout<<"Your score"<<(total>=50?" isPASS":"isFAILD")<<endl;
    system("pause");
    return 0;

}