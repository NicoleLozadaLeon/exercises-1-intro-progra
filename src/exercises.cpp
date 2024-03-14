
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string count_short_char;
  if (s1 < s2 && s1 < s3) {
    count_short_char = s1;
    cout << count_short_char;
  }
  else if (s2 < s1 && s2 < s3){
    count_short_char = s2;
    cout << count_short_char;
      }
  else if (s3 < s1 && s3 < s2) {
    count_short_char = s3;
    cout << count_short_char;
  }
  else {
    cout << "hay palabras iguales" ;
  }
  
  
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  int main() {
    double A = 0;
    double B = 4;
    double C = 10;
    double calcular_datos_raiz = B * B - 4 * A * C;
    if (A == 0) {
       double calcular_ByC = -C / B;
        cout << calcular_ByC;
        
    }
    else if ( calcular_datos_raiz > 0 ) {
        double calcular_positiva_fraccion = (-B + sqrt(calcular_datos_raiz)) / (2 * A);
        double calcular_negativa_fraccion = (-B - sqrt(calcular_datos_raiz)) / (2 * A);
        cout << calcular_positiva_fraccion << " " << calcular_negativa_fraccion;
    } else if (calcular_datos_raiz == 0) {
        double calcular_raiz_cero = -B / (2 * A);
        cout << calcular_raiz_cero;
    } else;

    return 0;
}
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
