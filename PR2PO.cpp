#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<ctime>
#include<algorithm>
#include<vector>

using namespace std;

void go_to_xy(int x, int y){
  POINT point;
  point.X = x;
  point.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}

vector<float>price_vector;
price_vector.push_back(85.50,2.25,4.45,10.10,24.10,7.75,40.45,33.33)

class purchase_order;

class requisition{
   static int req_code;
   int item_code;
   int quantity;
   string delivery_date;

   public:
      void get_data();   
      void display();
      friend void generate(requisition; po)
};

void requisition:: get_data()
{
  
}

