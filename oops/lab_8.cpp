#include<iostream>
using namespace std;

class example
{
   private:
   const float pie;
   int k;
   public:
   example(int b,float a) : pie(a),k(b)
   {}
   void show()
   {
    cout<<"pie = "<< pie <<endl;
    cout<<"k = " << k <<endl;
   }

};
int main()
{
    example obj(10,3.14);
    obj.show();
    return 0;
}