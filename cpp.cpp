#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"\t \t C A R  P A R K I N G"<<endl;
int Cars=0;
int Bikes=0;
int Cycles=0;
while(true){
int enter;
cout<<"Press 1 to enter Car"<<endl;
cout<<"Press 2 to enter Bike"<<endl;
cout<<"Press 3 to enter Cycle"<<endl;
cout<<"Press 4 to exit Car"<<endl;
cout<<"Press 5 to exit Bike"<<endl;
cout<<"Press 6 to exit Cycle"<<endl;
cout<<"Press 7 to show record"<<endl;
cout<<"Press 8 to delete the record"<<endl;
cout<<"Press 9 for exit"<<endl;
cin>>enter;

if(enter==1){
   Cars++;
     system("CLS");
    cout<<"Car is added successfully"<<endl;
}
else if(enter==2){
     Bikes++;
     system("CLS");
    cout<<"Bikes is added successfully"<<endl;
}
else if(enter==3){
   Cycles++;
     system("CLS");
    cout<<"Cycles is added successfully"<<endl;
}
else if(enter==4){
   
    Cars--;
     system("CLS");
    cout<<"Car is exited successfully"<<endl;
}
else if(enter==5){
   
    Bikes--;
     system("CLS");
    cout<<"Bike is exited successfully"<<endl;
}
else if(enter==6){
   
    Cycles--;
     system("CLS");
    cout<<"Cycle is exited successfully"<<endl;
}
else if(enter==7){
    cout<<"Cars=> "<<Cars<<endl;
    cout<<"Bikes=> "<<Bikes<<endl;
    cout<<"Cycles=> "<<Cycles<<endl;
}
else if(enter==8){
    Cars=0;
    Bikes=0;
    Cycles=0;
    system("CLS");
    cout<<"Record deleted successfully.....!!"<<endl;
}
else if(enter==9){
    exit(0);
}
else{
    cout<<"Invalid"<<endl;
}
}
}