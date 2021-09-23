//Stack class implementation

using namespace std;

class stack{
  private: //Member variables
    int size; //Size of stack
    int * a; //Pointer to dynamically allocate array
    bool empty;
    void ppush(int x){
      reserve(size + 1);
      a[size - 1] = x;
    }
    int ppop(){
      //get last index
      int last = a[size - 1];
      reserve(size - 1);
      return last;
    }
    //Pre allocate array with space
    void reserve(int s){
      int * bigger, *temp;
      bigger = new int [s];
      for(int i = 0; i < size; i++){
        bigger[i] = a[i];
      }
      temp = a;
      a = bigger;
      bigger = temp;
      size = s;
      if(size == 0){
        empty = true;
      }
      else{
        empty = false;
      }
    }
  public:
    //Default constructor
    stack(){
      size = 0;
      a = new int [size];
      empty = true;
    }
    int getSize(){
      return size;
    }
    void push(int num){
      ppush(num);
    }
    int pop(){
      return ppop();
    }
    bool isEmpty(){
      return empty;
    }
};