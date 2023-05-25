#include <iostream>
#include <vector>
using namespace std;

int area(int bl_x, int bl_y, int tr_x, int tr_y) {
  int length = tr_y - bl_y;
  int width = tr_x - bl_x;
  return length * width;
}

int inter_area(vector<int> s1, vector<int> s2) {
	int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
	int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

	return ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x)) *
	        (min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y)));
}

int main() {
  int x1, y1, x2, y2;  
  int x3, y3, x4, y4;
  int x5, y5, x6, y6;
  cin >>x1>>y1>>x2>>y2;
  cin >>x3>>y3>>x4>>y4;
  cin >>x5>>y5>>x6>>y6;
  
  int white_area = area(x1, y1, x2, y2);
  vector<int> white = {x1, y1, x2, y2};
  vector<int> black1 = {x3, y3, x4, y4}; 
  vector<int> black2 = {x5, y5, x6, y6};
  int in1 = inter_area(white, black1); 
  int in2 = inter_area(white, black2);
  if (white_area == in1 + in2) {
    cout <<  "NO";
  } else {
    cout << "YES";
  }
}
  

