#include<iostream>
using namespace std;
int main(){
    int finalresult=0;
    char playagain;
    int playquiz(void);
   finalresult=playquiz();
   cout<<"ur total score is "<<finalresult;
    
    if (finalresult>=6){
        cout<<"u are pass "<< endl;
        
    }
    else{
        cout<<" you are fail "<< endl;
    }
    
    
    
}

int playquiz(){
    char c;
    char option;
    int score=0;
    cout<<"welcome to quiz game"<< endl;
    cout<<"please follow the instructions "<< endl;
    cout<<"step 1:quiz contains total 10 questions "<< endl;
    cout<<"step 2 : you will given 1 marks for each right answers"<< endl;
    cout<<"step 3: no negative marking "<< endl;
    cout<<" step 4: please press s to start the quiz "<< endl;
    cout<<"step 5 please select option a,b,c,d"<< endl;
    cout<<"step 6 if ur score is >=6 then you will pass the quiz "<< endl;
    cin>>c;
    if(c=='s'|| c=='S'){
        
        cout<<"ques 1 what is the capital of india"<< endl;
        cout<<"(a) delhi (b) mumbai (c) kolkata (d)chennai"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
            
        }
        cout<<"ques 2 who is the prime minister of india "<< endl;
        cout<<"(a) narendra modi  (b) aditya nath (c) kejriwal (d)nitin"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        
    }
    cout<<"ques 3 what is the antional bird"<< endl;
        cout<<"(a) peacock (b) sparrow (c) pigeon (d)parrot"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"ques 4  what is the national animal of india "<< endl;
        cout<<"(a) tiger (b) lion (c) zebra(d) leopard"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;}
            
            
            cout<<"ques 5 what is the national flower  of india"<< endl;
        cout<<"(a) lotus (b) rose (c) lily (d)sunflower "<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
            
            cout<<"ques 6 who is the chief minister  of up "<< endl;
        cout<<"(a) aditya anth (b) kejrinath  (c) nitin (d) raghunath "<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"ques 7 what is the capital of up "<< endl;
        cout<<"(a) lucknow (b) prayagraj (c) kolkata (d)chennai"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"ques 8 what is the capital of  jhaharkhand"<< endl;
        cout<<"(a) ranchi (b) ramgarh (c) plamu  (d)chennai"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;}
            
            cout<<"ques 9 who is the leader of congress"<< endl;
        cout<<"(a) rahul (b) sonia (c) roshan (d)rohit "<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"ques 10 which one of the following state comes in north "<< endl;
        cout<<"(a) delhi (b) banglore (c) kerala (d)chennai"<< endl;
        cin>>option;
        if(option=='a'||option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
            
        }
            
            
    }
    else{
        cout<<"you have entered wrong value,please enter s "<< endl;
    
}
return score;
}
