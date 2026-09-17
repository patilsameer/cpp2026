class TimeDuration
{
private:
    int hours;
    int minutes;
    string taskname;
    int taskid;
    // you can add methods here


public:
    // you can add methods here
    TimeDuration();
    TimeDuration(int h, int m);
    TimeDuration operator+(const TimeDuration &obj);
    TimeDuration operator-(const TimeDuration &obj);

    bool operator>(const TimeDuration &obj);
    bool operator==(const TimeDuration &obj);

    TimeDuration& operator++();

    friend istream& operator>>(istream &in, TimeDuration &obj);
    friend ostream& operator<<(ostream &out, const TimeDuration &obj);
};

int main(){
    //Menu driven program to test the class
    //menu option are as below
    //1. add task
    //2. display all tasks
    //3. display total time spent on all tasks  
    //4. display the task with maximum time spent
    //5. display the task with minimum time spent
    //6. display the time difference between two tasks
}